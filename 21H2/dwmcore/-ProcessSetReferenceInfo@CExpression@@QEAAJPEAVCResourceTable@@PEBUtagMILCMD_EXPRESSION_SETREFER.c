/*
 * XREFs of ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x1800531C4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpression::ProcessSetReferenceInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EXPRESSION_SETREFERENCEINFO *a3,
        _QWORD *a4)
{
  unsigned int v6; // ecx
  unsigned __int64 v8; // r10
  SIZE_T v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebx

  v6 = *((_DWORD *)a3 + 2);
  if ( v6 && (v8 = *((unsigned int *)a3 + 3), (_DWORD)v8) && v6 + *((_DWORD *)this + 110) <= (unsigned int)v8 )
  {
    if ( !*((_QWORD *)this + 54) )
    {
      v9 = 24LL * *((unsigned int *)a3 + 3);
      if ( !is_mul_ok(v8, 0x18uLL) )
        v9 = -1LL;
      *((_QWORD *)this + 54) = operator new(v9);
      v6 = *((_DWORD *)a3 + 2);
    }
    v10 = 0LL;
    if ( v6 )
    {
      do
      {
        v10 = (unsigned int)(v10 + 1);
        v11 = *(_OWORD *)a4;
        a4 += 3;
        v12 = 3LL * *((unsigned int *)this + 110);
        v13 = *((_QWORD *)this + 54);
        *(_OWORD *)(v13 + 8 * v12) = v11;
        *(_QWORD *)(v13 + 8 * v12 + 16) = *(a4 - 1);
        ++*((_DWORD *)this + 110);
      }
      while ( (unsigned int)v10 < *((_DWORD *)a3 + 2) );
    }
    if ( ((*((_BYTE *)this + 216) & 2) != 0 || *((_QWORD *)this + 56))
      && (v14 = (*(__int64 (__fastcall **)(CExpression *, __int64))(*(_QWORD *)this + 232LL))(this, v10),
          v16 = v14,
          v14 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xABu, 0LL);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v16 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0x8Fu, 0LL);
  }
  return v16;
}
