/*
 * XREFs of ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x180162F40
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800B7B60 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x1800374F8 (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall FRAME_TIME_INFO::AddTokenForRenderContent(
        FRAME_TIME_INFO *this,
        const struct ConfirmPresentHistoryToken *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  _OWORD *v7; // rax
  unsigned int v8; // r8d
  __int64 v9; // rcx
  int v10; // eax
  void *lpMem; // [rsp+50h] [rbp+18h] BYREF

  lpMem = 0LL;
  v4 = HrAlloc(0x20uLL, &lpMem);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x3Du, 0LL);
  }
  else
  {
    v7 = lpMem;
    *(_OWORD *)lpMem = *(_OWORD *)a2;
    v7[1] = *((_OWORD *)a2 + 1);
    LODWORD(v7) = *((_DWORD *)this + 12);
    v8 = (_DWORD)v7 + 1;
    if ( (int)v7 + 1 >= (unsigned int)v7 )
    {
      if ( v8 <= *((_DWORD *)this + 11) )
      {
        v6 = 0;
        *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned int *)this + 12)) = lpMem;
        *((_DWORD *)this + 12) = v8;
        return v6;
      }
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 24, 8, 1, &lpMem);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0xC0u, 0LL);
    }
    else
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    if ( (v6 & 0x80000000) == 0 )
      return v6;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v6, 0x45u, 0LL);
  }
  if ( lpMem )
    operator delete(lpMem);
  return v6;
}
