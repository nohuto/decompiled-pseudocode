/*
 * XREFs of ??1heap_buffer@details_abi@wil@@QEAA@XZ @ 0x1400211A0
 * Callers:
 *     _wil::details_abi::RawUsageIndex::RecordUsage_::_1_::dtor$0 @ 0x140025F8D (_wil--details_abi--RawUsageIndex--RecordUsage_--_1_--dtor$0.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x14003B1D0 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::heap_buffer::~heap_buffer(wil::details_abi::heap_buffer *this, void *a2)
{
  wil::details *v2; // rax

  v2 = (wil::details *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v2 )
    wil::details::FreeProcessHeap(v2, a2);
}
