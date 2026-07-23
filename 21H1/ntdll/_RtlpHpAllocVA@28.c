/*
 * XREFs of _RtlpHpAllocVA@28 @ 0x4B377E59
 * Callers:
 *     _RtlpHpHeapAllocate@16 @ 0x4B37877E (_RtlpHpHeapAllocate@16.c)
 *     _RtlpHpHeapExtendContext@8 @ 0x4B378E8C (_RtlpHpHeapExtendContext@8.c)
 *     _RtlpHpLargeAlloc@16 @ 0x4B379D22 (_RtlpHpLargeAlloc@16.c)
 *     _RtlpHpSegMgrCommit@28 @ 0x4B37BF36 (_RtlpHpSegMgrCommit@28.c)
 *     _RtlpHpSegMgrReserve@20 @ 0x4B37C4D9 (_RtlpHpSegMgrReserve@20.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpHpTlLogVAChange@16 @ 0x4B370AE6 (_RtlpHpTlLogVAChange@16.c)
 *     _RtlpHpEnvAllocVA@36 @ 0x4B3723C3 (_RtlpHpEnvAllocVA@36.c)
 *     _RtlpHpVaMgrCtxAlloc@16 @ 0x4B37AA36 (_RtlpHpVaMgrCtxAlloc@16.c)
 */

NTSTATUS __fastcall RtlpHpAllocVA(PVOID *a1, int *a2, int a3, int a4, ULONG a5, unsigned int a6, unsigned int a7)
{
  unsigned int v8; // edi
  int v9; // ecx
  void *v10; // eax
  int *v11; // edx
  void **v12; // ebx
  NTSTATUS v13; // esi
  int v14; // esi
  int v15; // ecx
  int v16; // esi
  size_t v18; // [esp-4h] [ebp-3Ch]
  ULONG_PTR v19; // [esp+10h] [ebp-28h] BYREF
  PVOID *v20; // [esp+18h] [ebp-20h]
  int v21; // [esp+1Ch] [ebp-1Ch]
  int v22; // [esp+20h] [ebp-18h] BYREF
  int v23; // [esp+24h] [ebp-14h]
  int v24; // [esp+28h] [ebp-10h]
  int v25; // [esp+2Ch] [ebp-Ch]
  int v26; // [esp+30h] [ebp-8h]
  int savedregs; // [esp+38h] [ebp+0h] BYREF

  v21 = a3;
  v19 = __PAIR64__((unsigned int)a2, a7);
  v22 = 4096;
  v23 = 4096;
  v24 = 0x200000;
  v25 = 0x200000;
  v8 = a4 & 0xFEFFFFFF;
  v20 = a1;
  if ( (a4 & 0xFEFFFFFF) == 0x2000 && (a4 & 0x1000000) == 0 )
  {
    v25 = 0;
    if ( HIBYTE(a6) )
      v22 = HIBYTE(a6) - 1;
    else
      v22 = -1;
    v23 = BYTE1(a6);
    v24 = BYTE2(a6);
    if ( (a6 & 8) != 0 )
      v25 = 1;
    v9 = *a2;
    v26 = v19;
    LODWORD(v19) = v9 - ((v9 - 1) & 0xFFFFF) + 0xFFFFF;
    v10 = (void *)RtlpHpVaMgrCtxAlloc(v21, &v22);
    v11 = (int *)HIDWORD(v19);
    if ( !v10 )
    {
      v12 = v20;
      v13 = -1073741670;
      goto LABEL_20;
    }
    v12 = a1;
    *(_DWORD *)HIDWORD(v19) = v19;
    *a1 = v10;
    goto LABEL_28;
  }
  v14 = *a2;
  v15 = a4 & 0x2000;
  v21 = v15;
  if ( (a4 & 0x2000) != 0 )
  {
    v15 = v21;
    v16 = *(&v22 + BYTE1(a6)) - ((*(&v22 + BYTE1(a6)) - 1) & (*(&v22 + BYTE1(a6)) + v14 - 1)) + v14 - 1;
    a2 = (int *)HIDWORD(v19);
  }
  else
  {
    v16 = v14 - (((_WORD)v14 - 1) & 0xFFF) + 4095;
  }
  LODWORD(v19) = v16;
  if ( (a4 & 0x1000) != 0 && BYTE1(a6) >= 2u )
  {
    v12 = v20;
    *a2 = v16;
    if ( (a4 & 0x40000000) != 0 )
    {
      LODWORD(v18) = v16;
      memset(*v12, 0, v18);
    }
    v13 = 0;
LABEL_19:
    v11 = (int *)HIDWORD(v19);
    goto LABEL_20;
  }
  if ( v15 && (a6 & 8) != 0 )
    v8 = a4 & 0xFEFBFFFF | 0x40000;
  v12 = v20;
  v13 = RtlpHpEnvAllocVA(&v19, v20, (int)&savedregs, 0, v8, a5, v15, v15, 0, v15);
  if ( v13 < 0 )
    goto LABEL_19;
  v11 = (int *)HIDWORD(v19);
  *(_DWORD *)HIDWORD(v19) = v19;
LABEL_28:
  v13 = 0;
LABEL_20:
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(v8, *v11, (int)*v12, v13);
  return v13;
}
