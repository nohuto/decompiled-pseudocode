/*
 * XREFs of GuessMonitorOverrideForCoordinateConversions @ 0x1C002A700
 * Callers:
 *     NtUserLockCursor @ 0x1C0038FF0 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C00C5C80 (NtUserClipCursor.c)
 *     NtUserGetClipCursor @ 0x1C0139150 (NtUserGetClipCursor.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x1C000EC88 (HMValidateSharedHandleNoRip.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GuessMonitorOverrideForCoordinateConversions(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  int v6; // edi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned int v12; // edx
  int v13; // ecx
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = a1;
  v3 = 0LL;
  v6 = 1;
  if ( **(_DWORD **)gpDispInfo > 1u )
  {
    if ( qword_1C0258AE8 )
      v8 = qword_1C0258AE8();
    else
      v8 = -1073741637;
    if ( v8 >= 0 && qword_1C0258AF0 )
    {
      v9 = 18LL;
      if ( !a3 )
        v9 = a2;
      v10 = qword_1C0258AF0(&v14, v9);
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 40);
      v12 = *(_DWORD *)(v11 + 288);
      if ( (((unsigned __int16)(a2 >> 8) ^ (unsigned __int16)(v12 >> 8)) & 0x1FF) == 0 )
      {
        if ( (a2 & 0xF) != 2 || (v13 = 1, (a2 & 0x20000000) == 0) )
          v13 = 0;
        if ( (v12 & 0xF) != 2 || (v12 & 0x20000000) == 0 )
          v6 = 0;
        if ( v13 == v6 )
          return HMValidateSharedHandleNoRip(*(_QWORD *)(v11 + 256));
      }
    }
  }
  return v3;
}
