/*
 * XREFs of ?ReplaceDisplayedAllocation@ADAPTER_DISPLAY@@QEAAXPEBVDXGALLOCATION@@0@Z @ 0x1C014DA44
 * Callers:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0018CD0 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     McTemplateK0ppqqt_EtwWriteTransfer @ 0x1C0039658 (McTemplateK0ppqqt_EtwWriteTransfer.c)
 *     ?GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z @ 0x1C014DBD0 (-GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C014DBF8 (-GetPreviousConfigIndex@@YAHH@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::ReplaceDisplayedAllocation(
        ADAPTER_DISPLAY *this,
        const struct DXGALLOCATION *a2,
        const struct DXGALLOCATION *a3)
{
  __int64 v5; // rdx
  unsigned int v6; // r14d
  __int64 v7; // rcx
  unsigned int v8; // ebp
  __int64 v9; // rdi
  unsigned int v10; // r9d
  char v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _DISPLAY_PLANE_CONFIG *DisplayPlaneConfigHead; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  int PreviousConfigIndex; // r15d
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  _BYTE v30[72]; // [rsp+40h] [rbp-48h] BYREF
  const struct DXGALLOCATION *v31; // [rsp+A0h] [rbp+18h] BYREF

  v31 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (ADAPTER_DISPLAY *)((char *)this + 520), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  v6 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    v7 = *((_QWORD *)this + 14);
    do
    {
      v8 = 0;
      v9 = 3968LL * v6;
      v5 = v7;
      if ( *(_DWORD *)(v9 + v7 + 3736) )
      {
        do
        {
          LODWORD(v31) = 0;
          v11 = 1;
          DisplayPlaneConfigHead = GetDisplayPlaneConfigHead(
                                     (struct _DISPLAY_PLANE_CONFIG_QUEUE *)(168LL * v8 + v9 + 1120 + v7),
                                     (int *)&v31);
          if ( DisplayPlaneConfigHead )
          {
            PreviousConfigIndex = (int)v31;
            while ( *(const struct DXGALLOCATION **)DisplayPlaneConfigHead != a2 )
            {
              v11 = 0;
              v18 = v9 + v16 + *((_QWORD *)this + 14);
              if ( *(_DWORD *)(v18 + 1120) == -1 )
              {
                v20 = WdLogNewEntry5_WdAssertion(v13, v12);
                *(_QWORD *)(v20 + 24) = 9069LL;
                WdLogEvent5_WdAssertion(v20);
              }
              v19 = *(_DWORD *)(v18 + 1124);
              if ( v19 == -1 )
              {
                v21 = WdLogNewEntry5_WdAssertion(v13, v12);
                *(_QWORD *)(v21 + 24) = 9070LL;
                WdLogEvent5_WdAssertion(v21);
                v19 = *(_DWORD *)(v18 + 1124);
              }
              if ( PreviousConfigIndex == v19 )
                goto LABEL_19;
              PreviousConfigIndex = GetPreviousConfigIndex(PreviousConfigIndex);
              v13 = 80LL * PreviousConfigIndex;
              DisplayPlaneConfigHead = (struct _DISPLAY_PLANE_CONFIG *)(v13 + v18 + 1128);
              if ( !DisplayPlaneConfigHead )
                goto LABEL_19;
              v16 = 168LL * v8;
            }
            *(_QWORD *)DisplayPlaneConfigHead = 0LL;
            if ( v11 )
            {
              v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v15);
              v22[4] = v6;
              v22[5] = v8;
              v22[3] = a2;
              WdLogEvent5_WdWarning(v22);
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                v25 = *((_QWORD *)this + 14);
                LODWORD(v29) = *(unsigned __int8 *)(v25 + v9 + 721);
                LODWORD(v28) = v8;
                LODWORD(v27) = v6;
                McTemplateK0ppqqt_EtwWriteTransfer(
                  *(unsigned __int8 *)(v25 + v9 + 721),
                  v23,
                  v24,
                  *((_QWORD *)this + 2),
                  a2,
                  v27,
                  v28,
                  v29);
              }
            }
            *((_DWORD *)DisplayPlaneConfigHead + 2) &= ~1u;
          }
LABEL_19:
          v5 = *((_QWORD *)this + 14);
          ++v8;
          v7 = v5;
        }
        while ( v8 < *(_DWORD *)(v9 + v5 + 3736) );
      }
      v10 = 0;
      v7 = v5;
      if ( *(_DWORD *)(v9 + v5 + 3740) )
      {
        v7 = *((_QWORD *)this + 14);
        do
        {
          if ( *(_BYTE *)(v10 + v9 + v5 + 2880) )
          {
            v26 = v9 + 80LL * v10;
            if ( (*(_DWORD *)(v26 + v5 + 2904) & 1) != 0 && *(const struct DXGALLOCATION **)(v26 + v5 + 2896) == a2 )
            {
              *(_QWORD *)(v26 + v5 + 2896) = 0LL;
              *(_BYTE *)(v10 + *((_QWORD *)this + 14) + v9 + 2880) = 0;
              *(_DWORD *)(v26 + *((_QWORD *)this + 14) + 2904) &= ~1u;
              v7 = *((_QWORD *)this + 14);
            }
          }
          ++v10;
          v5 = v7;
        }
        while ( v10 < *(_DWORD *)(v9 + v7 + 3740) );
      }
      ++v6;
    }
    while ( v6 < *((_DWORD *)this + 20) );
  }
  if ( v30[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30, v5);
}
