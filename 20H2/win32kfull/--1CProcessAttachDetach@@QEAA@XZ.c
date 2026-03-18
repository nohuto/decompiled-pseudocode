/*
 * XREFs of ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C00B25FC
 * Callers:
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00B20A8 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxSetWindowLong @ 0x1C00F0128 (xxxSetWindowLong.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcessAttachDetach::~CProcessAttachDetach(CProcessAttachDetach *this)
{
  if ( *(_BYTE *)this )
    KeDetachProcess();
}
