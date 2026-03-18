/*
 * XREFs of FormInquiryBlockLimitsData @ 0x1C00012E8
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0001254 (ScsiInquiryRequest.c)
 * Callees:
 *     IsDeallocateSupported @ 0x1C0004618 (IsDeallocateSupported.c)
 *     NVMeSetSenseData @ 0x1C001AFC8 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryBlockLimitsData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r8
  _DWORD *v7; // rdx
  unsigned __int8 v8; // r9
  __int64 v9; // rbx
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned int v15; // r9d
  unsigned int v16; // ebx
  unsigned int v17; // ecx

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(unsigned int *)(a2 + 52);
    v6 = *(_QWORD *)(a2 + 64);
    v7 = (_DWORD *)(a2 + 60);
    v8 = *(_BYTE *)(v5 + a2 + 10);
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 24);
    v7 = (_DWORD *)(a2 + 16);
    v8 = *(_BYTE *)(a2 + 7);
  }
  v9 = v8;
  if ( *v7 < 0x40u )
  {
    LOBYTE(a4) = 36;
    LOBYTE(v6) = 5;
    LOBYTE(v7) = 6;
    NVMeSetSenseData(a2, v7, v6, a4);
    return (unsigned int)-1056964602;
  }
  else
  {
    *(_OWORD *)v6 = 0LL;
    *(_OWORD *)(v6 + 16) = 0LL;
    *(_OWORD *)(v6 + 32) = 0LL;
    *(_OWORD *)(v6 + 48) = 0LL;
    *(_BYTE *)(v6 + 1) = -80;
    v10 = IsDeallocateSupported();
    v15 = 0;
    if ( v10 && (v16 = *(_DWORD *)(*(_QWORD *)(v11 + 8 * v9 + 1720) + 52LL)) != 0 )
    {
      v17 = *(_DWORD *)(v14 + 48);
      *(_BYTE *)(v12 + 3) = 60;
      *(_DWORD *)(v12 + 24) = 0x10000;
      if ( !v17 )
        v17 = (0x40000000 / v16) << 6;
      *(_BYTE *)(v12 + 23) = v17;
      *(_BYTE *)(v12 + 22) = BYTE1(v17);
      *(_BYTE *)(v12 + 20) = HIBYTE(v17);
      *(_BYTE *)(v12 + 21) = BYTE2(v17);
    }
    else
    {
      *(_BYTE *)(v12 + 3) = 60;
    }
    *(_BYTE *)(v13 + 3) = 1;
  }
  return v15;
}
