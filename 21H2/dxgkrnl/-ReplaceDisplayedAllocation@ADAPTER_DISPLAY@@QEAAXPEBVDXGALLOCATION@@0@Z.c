/*
 * XREFs of ?ReplaceDisplayedAllocation@ADAPTER_DISPLAY@@QEAAXPEBVDXGALLOCATION@@0@Z @ 0x1C01C64E0
 * Callers:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C00140C4 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0ppqqt_EtwWriteTransfer @ 0x1C0045CE8 (McTemplateK0ppqqt_EtwWriteTransfer.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C01C6684 (-GetPreviousConfigIndex@@YAHH@Z.c)
 *     ?GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z @ 0x1C01C66A4 (-GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::ReplaceDisplayedAllocation(
        ADAPTER_DISPLAY *this,
        const struct DXGALLOCATION *a2,
        const struct DXGALLOCATION *a3)
{
  const struct DXGALLOCATION *v3; // r15
  unsigned int v5; // r14d
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r9
  char v11; // r12
  __int64 v12; // r13
  struct _DISPLAY_PLANE_CONFIG *DisplayPlaneConfigHead; // rsi
  int PreviousConfigIndex; // r15d
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // [rsp+28h] [rbp-80h]
  __int64 v22; // [rsp+30h] [rbp-78h]
  __int64 v23; // [rsp+38h] [rbp-70h]
  _BYTE v24[88]; // [rsp+50h] [rbp-58h] BYREF
  int v25; // [rsp+B0h] [rbp+8h]
  const struct DXGALLOCATION *v27; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+20h]

  v27 = a3;
  v3 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (ADAPTER_DISPLAY *)((char *)this + 608), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v5 = 0;
  v25 = 0;
  if ( *((_DWORD *)this + 24) )
  {
    v6 = *((_QWORD *)this + 16);
    do
    {
      v7 = 0;
      v8 = 4000LL * v5;
      v28 = v5;
      v9 = v6;
      if ( *(_DWORD *)(v8 + v6 + 3760) )
      {
        do
        {
          LODWORD(v27) = 0;
          v11 = 1;
          v12 = 168LL * v7;
          DisplayPlaneConfigHead = GetDisplayPlaneConfigHead(
                                     (struct _DISPLAY_PLANE_CONFIG_QUEUE *)(v8 + v12 + 1144 + v6),
                                     (int *)&v27);
          if ( DisplayPlaneConfigHead )
          {
            PreviousConfigIndex = (int)v27;
            while ( *(const struct DXGALLOCATION **)DisplayPlaneConfigHead != a2 )
            {
              v11 = 0;
              v15 = v8 + v12 + *((_QWORD *)this + 16);
              if ( *(_DWORD *)(v15 + 1144) == -1 )
              {
                WdLogSingleEntry1(1LL, 9243LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pQueue->HeadIndex != CONFIG_INDEX_INVALID",
                  9243LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v16 = *(_DWORD *)(v15 + 1148);
              if ( v16 == -1 )
              {
                WdLogSingleEntry1(1LL, 9244LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pQueue->TailIndex != CONFIG_INDEX_INVALID",
                  9244LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v16 = *(_DWORD *)(v15 + 1148);
              }
              if ( PreviousConfigIndex != v16 )
              {
                PreviousConfigIndex = GetPreviousConfigIndex(PreviousConfigIndex);
                DisplayPlaneConfigHead = (struct _DISPLAY_PLANE_CONFIG *)(80LL * PreviousConfigIndex + v15 + 1152);
                if ( DisplayPlaneConfigHead )
                  continue;
              }
              v3 = a2;
              goto LABEL_19;
            }
            *(_QWORD *)DisplayPlaneConfigHead = 0LL;
            if ( v11 )
            {
              v3 = a2;
              WdLogSingleEntry3(3LL, a2, v5, v7);
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              {
                v19 = *((_QWORD *)this + 16);
                LODWORD(v23) = *(unsigned __int8 *)(v19 + v8 + 761);
                LODWORD(v22) = v7;
                LODWORD(v21) = v5;
                McTemplateK0ppqqt_EtwWriteTransfer(
                  *(unsigned __int8 *)(v19 + v8 + 761),
                  v17,
                  v18,
                  *((_QWORD *)this + 2),
                  a2,
                  v21,
                  v22,
                  v23);
              }
            }
            else
            {
              v3 = a2;
            }
            *((_DWORD *)DisplayPlaneConfigHead + 2) &= ~1u;
          }
LABEL_19:
          v9 = *((_QWORD *)this + 16);
          ++v7;
          v6 = v9;
        }
        while ( v7 < *(_DWORD *)(v9 + v8 + 3760) );
      }
      v10 = 0LL;
      v6 = v9;
      if ( *(_DWORD *)(v8 + v9 + 3764) )
      {
        v6 = *((_QWORD *)this + 16);
        v20 = v28;
        do
        {
          if ( *(_BYTE *)(v10 + v8 + v9 + 2904)
            && (*(_DWORD *)(v9 + 80 * ((unsigned int)v10 + 50 * v20) + 2928) & 1) != 0
            && *(const struct DXGALLOCATION **)(v9 + 80 * ((unsigned int)v10 + 50 * v20) + 2920) == v3 )
          {
            *(_QWORD *)(v9 + 80 * ((unsigned int)v10 + 50 * v20) + 2920) = 0LL;
            *(_BYTE *)((unsigned int)v10 + *((_QWORD *)this + 16) + v8 + 2904) = 0;
            *(_DWORD *)(*((_QWORD *)this + 16) + 80 * ((unsigned int)v10 + 50 * v20) + 2928) &= ~1u;
            v6 = *((_QWORD *)this + 16);
          }
          v10 = (unsigned int)(v10 + 1);
          v9 = v6;
        }
        while ( (unsigned int)v10 < *(_DWORD *)(v8 + v6 + 3764) );
        v5 = v25;
      }
      v25 = ++v5;
    }
    while ( v5 < *((_DWORD *)this + 24) );
  }
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
}
