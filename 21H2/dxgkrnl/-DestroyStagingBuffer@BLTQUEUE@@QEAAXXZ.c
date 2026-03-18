/*
 * XREFs of ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C03BBD90
 * Callers:
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C03BC8A4 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C03BE07C (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C001E3F0 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019EA90 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C02D5BBC (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall BLTQUEUE::DestroyStagingBuffer(BLTQUEUE *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // ecx
  struct DXGALLOCATION **v7; // rdi
  unsigned int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // edx
  __int64 v12; // r9
  __int64 v13; // r8
  DXGDEVICE *v14; // rcx
  DXGDEVICESYNCOBJECT *v15; // rcx
  _BYTE v16[24]; // [rsp+50h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-40h] BYREF

  v1 = *((_QWORD *)this + 45);
  if ( !v1 )
    goto LABEL_26;
  v3 = *(_QWORD *)(v1 + 40);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v3 + 56), &ApcState);
  *(_BYTE *)(*((_QWORD *)this + 45) + 1905LL) = 1;
  if ( *((_DWORD *)this + 698) )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v16,
      (struct DXGPROCESS *)v3);
    v4 = (*((_DWORD *)this + 698) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v4 < *(_DWORD *)(v3 + 296) )
    {
      v5 = *(_QWORD *)(v3 + 280);
      v6 = *(_DWORD *)(v5 + 16 * v4 + 8);
      if ( ((*((_DWORD *)this + 698) >> 25) & 0x60) == (*(_BYTE *)(v5 + 16 * v4 + 8) & 0x60)
        && (v6 & 0x2000) == 0
        && (v6 & 0x1F) != 0 )
      {
        if ( (v6 & 0x1F) == 4 )
        {
          v7 = *(struct DXGALLOCATION ***)(v5 + 16LL * (unsigned int)v4);
          if ( v7 )
          {
LABEL_11:
            v8 = *((_DWORD *)this + 698);
            v9 = (v8 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v9 < *(_DWORD *)(v3 + 296) )
            {
              v10 = *(_QWORD *)(v3 + 280);
              v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
              if ( ((v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60)
                && (v11 & 0x2000) == 0
                && (v11 & 0x1F) != 0 )
              {
                *(_DWORD *)(v10 + 16LL * ((v8 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              }
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
            v13 = *(unsigned int *)(*((_QWORD *)this + 45) + 576LL);
            v14 = (DXGDEVICE *)*((_QWORD *)this + 45);
            if ( (_DWORD)v13 == 4 )
              DXGDEVICE::DestroyClientResource(v14, v7, v13, v12);
            else
              DXGDEVICE::DestroyAllocationInternal(
                v14,
                0LL,
                0LL,
                (struct DXGRESOURCE *)v7,
                0LL,
                DXGDEVICE::DestroyFlagsDefault);
            goto LABEL_21;
          }
LABEL_10:
          WdLogSingleEntry1(1LL, 4321LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource != NULL", 4321LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_11;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v7 = 0LL;
    goto LABEL_10;
  }
LABEL_21:
  if ( *((_DWORD *)this + 704) )
  {
    v15 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 353);
    if ( v15 )
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v15);
    *((_DWORD *)this + 704) = 0;
    *((_QWORD *)this + 353) = 0LL;
  }
  *(_BYTE *)(*((_QWORD *)this + 45) + 1905LL) = 0;
  KeUnstackDetachProcess(&ApcState);
LABEL_26:
  *((_QWORD *)this + 349) = 0LL;
  *((_QWORD *)this + 348) = 0LL;
  *((_QWORD *)this + 350) = 0LL;
  *((_QWORD *)this + 351) = 0LL;
}
