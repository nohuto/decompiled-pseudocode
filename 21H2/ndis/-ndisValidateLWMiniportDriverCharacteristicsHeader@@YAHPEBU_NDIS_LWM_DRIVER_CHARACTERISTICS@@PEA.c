/*
 * XREFs of ?ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEAE@Z @ 0x1C0116388
 * Callers:
 *     NdisLWMRegisterMiniportDriver @ 0x1C0060BE0 (NdisLWMRegisterMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0065E5C (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x1C0065FD4 (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateLWMiniportDriverCharacteristicsHeader(
        const struct _NDIS_LWM_DRIVER_CHARACTERISTICS *a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rax
  int v3; // ebx
  struct _GUID *v4; // rdi
  __int64 Data2_high; // r8
  char Data2; // r10
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-58h]

  v2 = (const struct _GUID *)&unk_1C00CA6F0;
  v3 = *((unsigned __int8 *)a1 + 5);
  v4 = (struct _GUID *)a2;
  Data2_high = 0LL;
  Data2 = 0;
  while ( (v3 | (*((unsigned __int8 *)a1 + 4) << 16)) != v2->Data1 )
  {
    v2 = (const struct _GUID *)((char *)v2 + 8);
    a2 = &WPP_6ddb316d784933c58b4801ad2d08aa04_Traceguids;
    if ( v2 == &WPP_6ddb316d784933c58b4801ad2d08aa04_Traceguids )
      goto LABEL_6;
  }
  Data2_high = HIBYTE(v2->Data2);
  Data2 = v2->Data2;
LABEL_6:
  if ( (_DWORD)Data2_high == 1 )
  {
    v8 = *(unsigned __int8 *)a1;
    if ( (_BYTE)v8 == 0xC7 && *((_WORD *)a1 + 1) >= 0x78u && *((_BYTE *)a1 + 1) )
    {
      LOBYTE(v4->Data1) = Data2;
      return 0LL;
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, 120LL, 0xFu, v9);
      return 3221291013LL;
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (__int64)a2,
        Data2_high,
        0xEu,
        v9,
        *((_BYTE *)a1 + 4),
        v3,
        (unsigned __int16 *)a1 + 8);
    return 3221291012LL;
  }
}
