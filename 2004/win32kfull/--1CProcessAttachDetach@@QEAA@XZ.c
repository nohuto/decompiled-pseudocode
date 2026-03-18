/*
 * XREFs of ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C00A6E48
 * Callers:
 *     xxxSetWindowLong @ 0x1C00A488C (xxxSetWindowLong.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00A6928 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcessAttachDetach::~CProcessAttachDetach(CProcessAttachDetach *this)
{
  if ( *(_BYTE *)this )
    KeDetachProcess();
}
