/*
 * XREFs of ValidateCoordinatedState @ 0x1C002B884
 * Callers:
 *     PepNotifyQueryCoordinatedStates @ 0x1C0032D0C (PepNotifyQueryCoordinatedStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C000EDC0 (memset.c)
 */

__int64 __fastcall ValidateCoordinatedState(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  char v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r10
  _BYTE *v12; // rcx
  bool v13; // zf
  _BYTE v15[176]; // [rsp+30h] [rbp-D8h] BYREF

  v2 = a2;
  memset(v15, 0, 0xA8uLL);
  v4 = a1 + 224 * v2;
  KeCopyAffinityEx(v15, &unk_1C0013718);
  v5 = *(_DWORD *)(v4 + 252);
  v6 = 0;
  v7 = 0;
  if ( !v5 )
    goto LABEL_12;
  v8 = v5;
  v9 = (_QWORD *)(*(_QWORD *)(v4 + 264) + 8LL);
  do
  {
    v10 = *((_DWORD *)v9 - 1);
    if ( v10 )
    {
      v11 = v10;
      v12 = (_BYTE *)(*v9 + 2LL);
      do
      {
        v13 = *v12 == 0;
        v12 += 4;
        if ( !v13 )
          v7 = 1;
        --v11;
      }
      while ( v11 );
    }
    v9 += 2;
    --v8;
  }
  while ( v8 );
  if ( v7 )
  {
    if ( (unsigned int)KeIsEqualAffinityEx(v4 + 48, &unk_1C0013718) )
      *(_BYTE *)(v4 + 256) = 1;
  }
  else
  {
LABEL_12:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x57u,
        (__int64)&WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids,
        v2);
    return (unsigned int)-1073741811;
  }
  return v6;
}
