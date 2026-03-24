/*
 * XREFs of ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0171E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000BB90 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001C620 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall QueryVidPnExclusiveOwnershipCallBack(struct DXGADAPTER *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  ADAPTER_DISPLAY *v8; // rax
  unsigned int i; // esi
  int VidPnSourceOwnerType; // ebp
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int128 v13; // xmm0
  int v14; // edx
  __int64 v15; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rax
  _BYTE v19[8]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGADAPTER *v20; // [rsp+38h] [rbp-20h]
  char v21; // [rsp+40h] [rbp-18h]

  v20 = a1;
  v21 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
  if ( *((_DWORD *)a1 + 50) == 1 )
  {
    v8 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 337);
    for ( i = 0; i < *((_DWORD *)v8 + 20); ++i )
    {
      VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v8, i);
      if ( ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((ADAPTER_DISPLAY **)a1 + 337), i) )
        VidPnSourceOwnerType = 4;
      if ( (unsigned int)(VidPnSourceOwnerType - 2) <= 2 )
      {
        v11 = 3968LL * i;
        v12 = *(_QWORD *)(*((_QWORD *)a1 + 337) + 112LL);
        if ( *(_QWORD *)(v11 + v12 + 712) == *(_QWORD *)a2 )
        {
          v13 = *(_OWORD *)(v11 + v12 + 628);
          v14 = a2[2];
          if ( (int)v13 <= v14 && SDWORD2(v13) >= v14 )
          {
            v15 = a2[3];
            if ( SDWORD1(v13) <= (int)v15 && SHIDWORD(v13) >= (int)v15 )
            {
              if ( a2[4] != -1 )
              {
                v18 = WdLogNewEntry5_WdAssertion(DWORD1(v13), v15);
                *(_QWORD *)(v18 + 24) = 10123LL;
                WdLogEvent5_WdAssertion(v18);
              }
              a2[4] = i;
              *(_QWORD *)(a2 + 5) = *(_QWORD *)((char *)a1 + 316);
              a2[7] = VidPnSourceOwnerType;
            }
          }
        }
      }
      v8 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 337);
    }
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
    v17[3] = a1;
    v17[4] = *((int *)a1 + 80);
    v17[5] = *((unsigned int *)a1 + 79);
  }
  if ( v21 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
  return 0LL;
}
