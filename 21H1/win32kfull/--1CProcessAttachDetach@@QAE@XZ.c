/*
 * XREFs of ??1CProcessAttachDetach@@QAE@XZ @ 0x3F3E4
 * Callers:
 *     _xxxSetWindowLong@20 @ 0x3EF3C (_xxxSetWindowLong@20.c)
 * Callees:
 *     <none>
 */

void __thiscall CProcessAttachDetach::~CProcessAttachDetach(CProcessAttachDetach *this)
{
  if ( *(_BYTE *)this )
    KeDetachProcess();
}
