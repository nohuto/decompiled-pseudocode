/*
 * XREFs of ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18009F390
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18009F078 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2CD2DSharedBuffer@@KAPEAX_K@Z @ 0x18009F334 (--2CD2DSharedBuffer@@KAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C0950 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CD2DSharedBuffer::CreateFromSharedSection(
        void *a1,
        int a2,
        struct CSharedSection *a3,
        struct ID2D1PrivateCompositorBuffer **a4)
{
  unsigned int v8; // edi
  _DWORD *v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // rbx

  v8 = 0;
  v9 = CD2DSharedBuffer::operator new();
  v11 = v9;
  if ( v9 )
  {
    v9[2] = 0;
    *(_QWORD *)v9 = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v9 + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
    *((_QWORD *)v9 + 3) = a1;
    v9[8] = a2;
    *((_QWORD *)v9 + 5) = a3;
    if ( a3 )
      CMILCOMBase::InternalAddRef(a3);
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    CMILCOMBase::InternalAddRef((CMILCOMBase *)v11);
    *a4 = (struct ID2D1PrivateCompositorBuffer *)(v11 + 4);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x3Du, 0LL);
  }
  return v8;
}
