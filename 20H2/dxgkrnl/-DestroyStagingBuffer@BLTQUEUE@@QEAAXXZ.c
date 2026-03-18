/*
 * XREFs of ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C02FBFAC
 * Callers:
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02FCABC (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C02FDEDC (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0002378 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01165A8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0226798 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall BLTQUEUE::DestroyStagingBuffer(BLTQUEUE *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  void *v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // edx
  DXGDEVICE *v15; // rcx
  DXGDEVICESYNCOBJECT *v16; // rcx
  _BYTE v17[24]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  v1 = *((_QWORD *)this + 44);
  if ( !v1 )
    goto LABEL_26;
  v3 = *(_QWORD *)(v1 + 40);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v3 + 56), &ApcState);
  *(_BYTE *)(*((_QWORD *)this + 44) + 1905LL) = 1;
  if ( *((_DWORD *)this + 694) )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v17, (struct _KTHREAD **)v3);
    v5 = *((unsigned int *)this + 694);
    v6 = (*((_DWORD *)this + 694) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v6 < *(_DWORD *)(v3 + 256) )
    {
      v7 = *(_QWORD *)(v3 + 240);
      v5 = ((unsigned int)v5 >> 25) & 0x60;
      v4 = *(unsigned int *)(v7 + 16 * v6 + 8);
      if ( (_BYTE)v5 == (*(_BYTE *)(v7 + 16 * v6 + 8) & 0x60) && (v4 & 0x2000) == 0 && (v4 & 0x1F) != 0 )
      {
        v4 &= 0x1Fu;
        if ( (_BYTE)v4 == 4 )
        {
          v9 = *(void **)(v7 + 16LL * (unsigned int)v6);
          if ( v9 )
          {
LABEL_11:
            v11 = *((_DWORD *)this + 694);
            v12 = (v11 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v12 < *(_DWORD *)(v3 + 256) )
            {
              v13 = *(_QWORD *)(v3 + 240);
              v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
              if ( ((v11 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
                && (v14 & 0x2000) == 0
                && (v14 & 0x1F) != 0 )
              {
                *(_DWORD *)(v13 + 16LL * ((v11 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              }
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
            v15 = (DXGDEVICE *)*((_QWORD *)this + 44);
            if ( *((_DWORD *)v15 + 144) == 4 )
              DXGDEVICE::DestroyClientResource(v15, v9);
            else
              DXGDEVICE::DestroyAllocationInternal(
                v15,
                0,
                0LL,
                (struct DXGRESOURCE *)v9,
                0LL,
                DXGDEVICE::DestroyFlagsDefault);
            goto LABEL_21;
          }
LABEL_10:
          v10 = WdLogNewEntry5_WdAssertion(v4, v5);
          *(_QWORD *)(v10 + 24) = 4215LL;
          WdLogEvent5_WdAssertion(v10);
          goto LABEL_11;
        }
        v8 = WdLogNewEntry5_WdError(v4, v5);
        *(_QWORD *)(v8 + 24) = 267LL;
        WdLogEvent5_WdError(v8);
      }
    }
    v9 = 0LL;
    goto LABEL_10;
  }
LABEL_21:
  if ( *((_DWORD *)this + 700) )
  {
    v16 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 351);
    if ( v16 )
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v16);
    *((_DWORD *)this + 700) = 0;
    *((_QWORD *)this + 351) = 0LL;
  }
  *(_BYTE *)(*((_QWORD *)this + 44) + 1905LL) = 0;
  KeUnstackDetachProcess(&ApcState);
LABEL_26:
  *((_QWORD *)this + 347) = 0LL;
  *((_QWORD *)this + 346) = 0LL;
  *((_QWORD *)this + 348) = 0LL;
  *((_QWORD *)this + 349) = 0LL;
}
