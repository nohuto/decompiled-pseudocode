/*
 * XREFs of _xxxSetCsrssThreadDesktop@8 @ 0xC9346
 * Callers:
 *     _xxxSetInformationThread@16 @ 0xC9146 (_xxxSetInformationThread@16.c)
 *     _xxxQueryInformationThread@16 @ 0xCF7F4 (_xxxQueryInformationThread@16.c)
 *     _xxxHardErrorControl@12 @ 0x1A022C (_xxxHardErrorControl@12.c)
 * Callees:
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxSetThreadDesktop@8 @ 0x7D894 (_xxxSetThreadDesktop@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     _CloseProtectedHandle@8 @ 0xC931A (_CloseProtectedHandle@8.c)
 */

NTSTATUS __stdcall xxxSetCsrssThreadDesktop(_BYTE *Object, PVOID *a2)
{
  bool v2; // zf
  PVOID *v3; // edi
  void *v4; // ecx
  int v5; // eax
  NTSTATUS v6; // esi
  _BYTE *v7; // eax
  NTSTATUS result; // eax
  struct _NT_TIB *v9; // eax
  unsigned int v10[7]; // [esp+10h] [ebp-20h] BYREF
  int v11; // [esp+2Ch] [ebp-4h]

  v2 = (Object[24] & 8) == 0;
  v11 = _gptiCurrent;
  if ( !v2 )
    return -1073741823;
  v3 = a2;
  v4 = *(void **)(_gptiCurrent + 248);
  *a2 = v4;
  if ( !v4 || (result = ObReferenceObjectByPointer(v4, 0x2000000u, (POBJECT_TYPE)ExDesktopObjectType, 0), result >= 0) )
  {
    v5 = ObOpenObjectByPointer(Object, 0, 0, (ACCESS_MASK)&loc_1F0002 + 1, 0, 0, a2 + 1);
    v6 = v5;
    if ( v5 < 0 )
    {
      v9 = (struct _NT_TIB *)RtlNtStatusToDosError(v5);
      UserSetLastError(v9);
      if ( *a2 )
        ObfDereferenceObject(*a2);
    }
    else
    {
      v7 = *(_BYTE **)(v11 + 248);
      if ( Object != v7 )
      {
        if ( v7 )
        {
          memset(v10, 0, sizeof(v10));
          while ( xxxInternalGetMessage(v10, 0, 0, 3u, 0) )
            xxxDispatchMessage(v10);
          v3 = a2;
        }
        v6 = xxxSetThreadDesktop(0, (int)Object);
        if ( v6 < 0 )
        {
          if ( *v3 )
            ObfDereferenceObject(*v3);
          CloseProtectedHandle(v3[1], 0);
        }
      }
    }
    return v6;
  }
  return result;
}
