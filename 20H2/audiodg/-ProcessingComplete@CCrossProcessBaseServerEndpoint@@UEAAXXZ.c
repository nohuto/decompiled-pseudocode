/*
 * XREFs of ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x1400135C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x140013504 (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140044638 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0pqp_EventWriteTransfer @ 0x1400615B0 (McTemplateU0pqp_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessBaseServerEndpoint::ProcessingComplete(CCrossProcessBaseServerEndpoint *this, int a2)
{
  CCrossProcessBaseServerEndpoint *v2; // rbx
  char v3; // al
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = this;
  if ( (*((_DWORD *)this + 42) & 0x40000) != 0 )
  {
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 8) + 164LL), 0, 0);
    v4 = v3 & 1;
    if ( (v3 & 1) != 0 )
    {
      v5 = *((_QWORD *)this + 52);
      if ( v5 )
      {
        _InterlockedExchange64((volatile __int64 *)v2 + 51, v5);
        v6 = *((_QWORD *)v2 + 50);
        v10 = *((_QWORD *)v2 + 51);
        *((_QWORD *)v2 + 50) = 0LL;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        v7 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(
               (_QWORD *)v2 + 50,
               &v10);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3B2,
            (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
            (const char *)(unsigned int)v7,
            v8);
        *((_QWORD *)v2 + 52) = 0LL;
      }
    }
    this = (CCrossProcessBaseServerEndpoint *)*((_QWORD *)v2 + 51);
    if ( this && ((*((_BYTE *)v2 + 168) & 1) == 0 || v4) )
      SetEvent(this);
  }
  if ( (byte_140090541 & 4) != 0 )
    McTemplateU0pqp_EventWriteTransfer((_DWORD)this, a2, (_DWORD)v2 - 8, *((_DWORD *)v2 + 107), *((_QWORD *)v2 + 51));
}
