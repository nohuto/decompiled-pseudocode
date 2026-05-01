/*
 * XREFs of ??_GCWRLExecuteCommandBase@@MEAAPEAXI@Z @ 0x180307EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x180307DB0 (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 */

CWRLExecuteCommandBase *__fastcall CWRLExecuteCommandBase::`scalar deleting destructor'(
        CWRLExecuteCommandBase *this,
        char a2)
{
  CWRLExecuteCommandBase::~CWRLExecuteCommandBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
