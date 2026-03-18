/*
 * XREFs of PopAdaptiveGetConsoleSessionState @ 0x1407EF258
 * Callers:
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1407EF190 (PopAdaptiveGetSessionStateUnsafe.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1407525EC (PopSetPowerSettingValueAcDc.c)
 *     PopSetSessionUserStatus @ 0x1407EF430 (PopSetSessionUserStatus.c)
 *     TtmIsEnabled @ 0x1407F0F98 (TtmIsEnabled.c)
 *     PopAdaptiveConsoleSessionOverrideClear @ 0x14099C75C (PopAdaptiveConsoleSessionOverrideClear.c)
 */

__int64 __fastcall PopAdaptiveGetConsoleSessionState(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v4; // r12d
  __int64 v6; // r13
  unsigned int v8; // edi
  char IsEnabled; // al
  int v10; // edx
  unsigned int v11; // ebx
  unsigned int v12; // esi
  unsigned int *v13; // r14
  __int64 v15; // rax
  bool v16; // zf
  _QWORD *v17; // rsi
  unsigned int i; // r14d
  bool v19; // cc
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r8
  unsigned int v25; // [rsp+60h] [rbp+8h]
  int v26; // [rsp+68h] [rbp+10h] BYREF
  __int64 v27; // [rsp+70h] [rbp+18h]

  v27 = a3;
  v25 = a1;
  v4 = PopInputTimeout;
  v6 = a3;
  v8 = 3;
  IsEnabled = TtmIsEnabled(a1, a2);
  v10 = *(_DWORD *)(a2 + 32);
  if ( IsEnabled )
  {
    v11 = PopDisplayTimeout;
    v4 = 0;
    v26 = PopDisplayTimeout;
    v8 = v10 == 0 ? 2 : 0;
    goto LABEL_13;
  }
  if ( v10 )
  {
    if ( !byte_140C1F3A1
      || byte_140C1F3A2
      || (v11 = PopAdaptiveLockConsoleTimeout,
          v19 = PopAdaptiveLockConsoleTimeout <= (unsigned int)PopDisplayTimeout,
          v26 = PopAdaptiveLockConsoleTimeout,
          *a4 = 257,
          !v19)
      && !PopEnforceConsoleLockScreenTimeout )
    {
      v11 = PopDisplayTimeout;
      v26 = PopDisplayTimeout;
      *a4 = 256;
    }
    v12 = 0;
    v13 = (unsigned int *)&unk_140C1F3D0;
    while ( 1 )
    {
      if ( *((_BYTE *)v13 - 16) )
      {
        v20 = *((_QWORD *)v13 - 1);
        if ( v20 >= *(_QWORD *)(a2 + 16) )
        {
          v21 = *(_QWORD *)(a2 + 8);
          v8 = 2;
          v22 = *v13;
          if ( v21 > v20 )
          {
            v24 = (v21 - v20) / 0x3E8;
            if ( v24 < v22 )
            {
              v23 = v22 - v24;
              goto LABEL_36;
            }
            v23 = 1LL;
          }
          else
          {
            v23 = v22 + (v20 - v21) / 0x3E8;
LABEL_36:
            if ( v23 >= 0xFFFFFFFF )
              v23 = 0xFFFFFFFFLL;
          }
          if ( !v11 || v23 < v11 )
          {
            v11 = v23;
            *a4 = v12;
          }
          goto LABEL_7;
        }
        PopAdaptiveConsoleSessionOverrideClear(v12, 1LL);
      }
LABEL_7:
      ++v12;
      v13 += 6;
      if ( v12 >= 2 )
      {
        v6 = v27;
        v26 = v11;
        if ( v8 == 3 )
        {
          if ( *(_QWORD *)(a2 + 8) <= (unsigned __int64)qword_140C1F3B0 )
          {
            v8 = 2;
          }
          else
          {
            if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                                  - *(_QWORD *)(a2 + 8))
               / 0x3E8 < (unsigned int)PopInputTimeout
              || (v8 = 2, !PopInputTimeout) )
            {
              v8 = 0;
            }
            v11 = v26;
          }
        }
        goto LABEL_13;
      }
    }
  }
  v15 = *(_QWORD *)(a2 + 24);
  v8 = 2;
  v16 = qword_140C1F3B0 == v15;
  v11 = dword_140C1F3A4;
  v26 = dword_140C1F3A4;
  *a4 = 256;
  if ( !v16 )
  {
    qword_140C1F3B0 = v15;
    v17 = &unk_140C1F3C0;
    for ( i = 0; i < 2; ++i )
    {
      if ( *(_BYTE *)v17 && v17[1] <= *(_QWORD *)(a2 + 24) )
        PopAdaptiveConsoleSessionOverrideClear(i, 0LL);
      v17 += 3;
    }
  }
LABEL_13:
  dword_140C1F3A4 = v11;
  qword_140C1F3A8 = *(_QWORD *)(a2 + 8);
  if ( v8 )
    v4 = 0;
  *(_DWORD *)v6 = v11;
  *(_BYTE *)(v6 + 8) = v8 != 0;
  *(_DWORD *)(v6 + 4) = v4;
  PopSetSessionUserStatus(v25, v8);
  return PopSetPowerSettingValueAcDc(&GUID_CONSOLE_VIDEO_TIMEOUT, 4u, &v26);
}
