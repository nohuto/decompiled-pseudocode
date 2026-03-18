/*
 * XREFs of CleanupRemoteHandles @ 0x1C004E690
 * Callers:
 *     xxxRemoteConnect @ 0x1C0054D30 (xxxRemoteConnect.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CleanupRemoteHandles(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  PVOID v4; // rcx
  __int64 result; // rax

  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[3] = 0LL;
  v3 = a1[7];
  if ( v3 )
  {
    Win32FreePool(v3);
    a1[7] = 0LL;
  }
  if ( gThinwireFileObject )
  {
    ObfDereferenceObject(gThinwireFileObject);
    gThinwireFileObject = 0LL;
  }
  if ( gVideoFileObject )
  {
    ObfDereferenceObject(gVideoFileObject);
    gVideoFileObject = 0LL;
  }
  v4 = gpRemoteBeepDevice;
  if ( gpRemoteBeepDevice )
  {
    ObfDereferenceObject(gpRemoteBeepDevice);
    gpRemoteBeepDevice = 0LL;
  }
  ghRemoteMouseChannel = 0LL;
  ghRemoteKeyboardChannel = 0LL;
  result = (__int64)qword_1C0258F10;
  if ( qword_1C0258F10 )
    result = qword_1C0258F10(v4, a2);
  if ( (_DWORD)result )
  {
    if ( qword_1C0257C40 )
      result = qword_1C0257C40();
    else
      result = 3221225659LL;
    if ( (int)result >= 0 )
    {
      result = (__int64)qword_1C0257C48;
      if ( qword_1C0257C48 )
        return qword_1C0257C48();
    }
  }
  return result;
}
