/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410
 * Callers:
 *     _UmfdQueryFontTree@20 @ 0x858C8 (_UmfdQueryFontTree@20.c)
 *     _UmfdQueryTrueTypeTable@32 @ 0x86C4E (_UmfdQueryTrueTypeTable@32.c)
 *     _UmfdQueryAdvanceWidths@24 @ 0x86F74 (_UmfdQueryAdvanceWidths@24.c)
 *     _UmfdQueryFontData@28 @ 0x87310 (_UmfdQueryFontData@28.c)
 *     _UmfdUnloadFontFileInternal@4 @ 0xCDEEE (_UmfdUnloadFontFileInternal@4.c)
 *     _UmfdDestroyFont@4 @ 0xD0BEA (_UmfdDestroyFont@4.c)
 *     _UmfdTrueTypeFreeGlyphset@12 @ 0xD3248 (_UmfdTrueTypeFreeGlyphset@12.c)
 *     _UmfdQueryFont@16 @ 0xDC592 (_UmfdQueryFont@16.c)
 *     _UmfdLoadFontFile@28 @ 0xDE9A6 (_UmfdLoadFontFile@28.c)
 *     _UmfdQueryFontFile@16 @ 0xDEBA2 (_UmfdQueryFontFile@16.c)
 *     _UmfdQueryGlyphMetricsPlusBits@24 @ 0xF886E (_UmfdQueryGlyphMetricsPlusBits@24.c)
 *     _UmfdDrvFreeInternal@12 @ 0x24A6EA (_UmfdDrvFreeInternal@12.c)
 *     _UmfdEscape@24 @ 0x24A72A (_UmfdEscape@24.c)
 *     _UmfdFontManagement@28 @ 0x24A78E (_UmfdFontManagement@28.c)
 *     _UmfdGetTrueTypeFile@8 @ 0x24A7D5 (_UmfdGetTrueTypeFile@8.c)
 *     _UmfdQueryGlyphAttrs@8 @ 0x24A82E (_UmfdQueryGlyphAttrs@8.c)
 *     _UmfdQueryTrueTypeOutline@28 @ 0x24A8B3 (_UmfdQueryTrueTypeOutline@28.c)
 * Callees:
 *     UmfdHostLifeTimeManager::ExecuteCallbackIfUmfdHostIsReady__lambda_95c27c6d3719cab4b30ebc7bb5fd2a18___ @ 0x874A4 (UmfdHostLifeTimeManager--ExecuteCallbackIfUmfdHostIsReady__lambda_95c27c6d3719cab4b30ebc7bb5fd2a.c)
 *     ?UmfdCreateRequestContext@@YGPAXXZ @ 0x874EC (-UmfdCreateRequestContext@@YGPAXXZ.c)
 *     ?UmfdClientWaitForCompletion@@YGJPAX0PBI@Z @ 0x875F4 (-UmfdClientWaitForCompletion@@YGJPAX0PBI@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ?UmfdCancelServerOutstandingRequests@@YGJPAX@Z @ 0xD0082 (-UmfdCancelServerOutstandingRequests@@YGJPAX@Z.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SGPAXXZ @ 0xD3E72 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SGPAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@3@Z @ 0x140661 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@.c)
 */

int __fastcall UmfdClientSendAndWaitForCompletion(unsigned int a1, int a2)
{
  void **v2; // esi
  void *RequestContext; // eax
  void *v4; // ebx
  int IsReady__lambda_95c27c6d3719cab4b30ebc7bb5fd2a18; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  unsigned int v10; // edx
  void *v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edi
  unsigned int v15; // eax
  void *v16; // [esp+0h] [ebp-38h]
  void *v17; // [esp+0h] [ebp-38h]
  void *v18; // [esp+0h] [ebp-38h]
  const unsigned int *v19; // [esp+4h] [ebp-34h]
  const unsigned int *v20; // [esp+4h] [ebp-34h]
  void *v21; // [esp+10h] [ebp-28h]
  int v22; // [esp+14h] [ebp-24h]
  int v23; // [esp+18h] [ebp-20h] BYREF
  int v24; // [esp+1Ch] [ebp-1Ch]
  unsigned int v25; // [esp+20h] [ebp-18h]
  int v26; // [esp+24h] [ebp-14h] BYREF
  int v27[4]; // [esp+28h] [ebp-10h] BYREF

  v23 = a2;
  if ( a1 > 3 )
    return -1073741811;
  v2 = (&g_pUmfdClientPort)[a1];
  RequestContext = UmfdCreateRequestContext();
  v4 = RequestContext;
  v21 = RequestContext;
  if ( !RequestContext )
    return -1073741801;
  v27[1] = (int)v2;
  v27[3] = (int)RequestContext;
  v27[2] = (int)&v23;
  IsReady__lambda_95c27c6d3719cab4b30ebc7bb5fd2a18 = UmfdHostLifeTimeManager::ExecuteCallbackIfUmfdHostIsReady__lambda_95c27c6d3719cab4b30ebc7bb5fd2a18___(
                                                       (char)v2,
                                                       &v23,
                                                       RequestContext);
  if ( IsReady__lambda_95c27c6d3719cab4b30ebc7bb5fd2a18 >= 0 )
  {
    IsReady__lambda_95c27c6d3719cab4b30ebc7bb5fd2a18 = UmfdClientWaitForCompletion(
                                                         &UmfdHostLifeTimeManager::TimeoutMS,
                                                         v16,
                                                         v19);
    if ( IsReady__lambda_95c27c6d3719cab4b30ebc7bb5fd2a18 == 258 )
    {
      v7 = MEMORY[0xFFDF0004];
      if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
      {
        v9 = MEMORY[0xFFDF0324];
        v10 = MEMORY[0xFFDF0320];
        if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
        {
          do
          {
            _mm_pause();
            v9 = MEMORY[0xFFDF0324];
            v10 = MEMORY[0xFFDF0320];
          }
          while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
          v4 = v21;
          v7 = MEMORY[0xFFDF0004];
        }
        v8 = v7 * (v9 << 8) + (((unsigned int)v7 * (unsigned __int64)v10) >> 24);
      }
      else
      {
        v8 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
      }
      v22 = v8;
      v11 = UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle();
      if ( v11 )
        ZwClose(v11);
      UmfdCancelServerOutstandingRequests(v17);
      IsReady__lambda_95c27c6d3719cab4b30ebc7bb5fd2a18 = UmfdClientWaitForCompletion(0, v18, v20);
      if ( (unsigned int)dword_266280 > 5 && (unsigned __int8)_tlgKeywordOn(0, 0x2000) )
      {
        v12 = MEMORY[0xFFDF0004];
        v24 = MEMORY[0xFFDF0004];
        if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
        {
          v14 = MEMORY[0xFFDF0324];
          v25 = MEMORY[0xFFDF0320];
          if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
          {
            v15 = v25;
          }
          else
          {
            do
            {
              _mm_pause();
              v14 = MEMORY[0xFFDF0324];
              v15 = MEMORY[0xFFDF0320];
            }
            while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
            v4 = v21;
            v12 = v24;
          }
          v13 = v12 * (v14 << 8) + (((unsigned int)v12 * (unsigned __int64)v15) >> 24);
        }
        else
        {
          v13 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
        }
        v26 = v13 - v22;
        v27[0] = IsReady__lambda_95c27c6d3719cab4b30ebc7bb5fd2a18;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_266280,
          (int)&unk_257A78,
          v12,
          v12,
          (int)v27,
          (int)&v26);
      }
    }
  }
  EngFreeMem(v4);
  return IsReady__lambda_95c27c6d3719cab4b30ebc7bb5fd2a18;
}
