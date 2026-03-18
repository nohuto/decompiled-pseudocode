/*
 * XREFs of NtUserGetUniformSpaceMapping @ 0x1C0012BB0
 * Callers:
 *     <none>
 * Callees:
 *     DrvIsUniformSpaceMapping @ 0x1C0012CF0 (DrvIsUniformSpaceMapping.c)
 *     HMValidateSharedHandle @ 0x1C0078CE8 (HMValidateSharedHandle.c)
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetUniformSpaceMapping(__int64 a1, _OWORD *a2)
{
  __int128 v4; // xmm6
  int v5; // edi
  __int64 v6; // rax
  ULONG64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rbx
  int v10; // r14d
  __int128 *v12; // rax
  __int64 v13; // rdx
  _OWORD *v14; // rax

  v4 = 0LL;
  v5 = 0;
  EnterSharedCrit(0LL, 1LL);
  v6 = HMValidateSharedHandle(a1);
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 240);
    if ( v8 )
    {
      v9 = *(_QWORD *)(gpDispInfo + 16);
      v10 = 0;
      if ( (unsigned int)DrvIsUniformSpaceMapping(v9) )
      {
        v7 = *(unsigned int *)(v9 + 20);
        if ( (_DWORD)v7 )
        {
          v12 = (__int128 *)(v9 + 76);
          v13 = (unsigned int)v7;
          do
          {
            if ( *(_QWORD *)((char *)v12 - 36) == v8 )
            {
              v4 = *v12;
              v10 = 1;
            }
            v12 = (__int128 *)((char *)v12 + 56);
            --v13;
          }
          while ( v13 );
        }
      }
      if ( v10 )
      {
        v5 = 1;
        v7 = MmUserProbeAddress;
        v14 = a2;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          v14 = (_OWORD *)MmUserProbeAddress;
        *v14 = *v14;
        *a2 = v4;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v5;
}
