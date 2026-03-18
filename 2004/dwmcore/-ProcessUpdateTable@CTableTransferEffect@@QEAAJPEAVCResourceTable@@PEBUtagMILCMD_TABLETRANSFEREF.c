/*
 * XREFs of ?ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TABLETRANSFEREFFECT_UPDATETABLE@@PEBXI@Z @ 0x1801F1C58
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BC868 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1801F1B58 (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 */

__int64 __fastcall CTableTransferEffect::ProcessUpdateTable(
        CTableTransferEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_TABLETRANSFEREFFECT_UPDATETABLE *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  char *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx

  v5 = 0;
  if ( a4 )
  {
    if ( !*((_DWORD *)a3 + 2) )
    {
      v9 = (char *)this + 40 * *((unsigned int *)a3 + 3) + 160;
      *((_DWORD *)v9 + 6) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)v9, 4u);
    }
    v10 = DynArray<float,0>::AddMultipleAndSet((__int64)this + 40 * *((unsigned int *)a3 + 3) + 160, a4, a5 >> 2);
    v5 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x2Au, 0LL);
  }
  return v5;
}
