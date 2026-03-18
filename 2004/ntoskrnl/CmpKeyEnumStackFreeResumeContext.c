/*
 * XREFs of CmpKeyEnumStackFreeResumeContext @ 0x140877640
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405CF0D0 (CmpEnumerateLayeredKey.c)
 *     CmpDeleteKeyObject @ 0x1405ED4B0 (CmpDeleteKeyObject.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406449E0 (CmpFlushNotifiesOnKeyBodyList.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1405E6C54 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 */

void __fastcall CmpKeyEnumStackFreeResumeContext(PPRIVILEGE_SET Privileges, __int64 a2, char a3)
{
  ULONG *p_Attributes; // rdi
  __int64 v7; // rsi
  ULONG_PTR v8; // rcx

  if ( SLOWORD(Privileges->PrivilegeCount) >= 0 )
  {
    p_Attributes = &Privileges->Privilege[0].Attributes;
    v7 = (unsigned __int16)(LOWORD(Privileges->PrivilegeCount) + 1);
    do
    {
      v8 = *(_QWORD *)p_Attributes;
      if ( *(_QWORD *)p_Attributes )
      {
        if ( a3 )
          CmpDelayDerefKeyControlBlock(v8, a2);
        else
          CmpDereferenceKeyControlBlock(v8);
      }
      p_Attributes += 6;
      --v7;
    }
    while ( v7 );
  }
  CmSiFreeMemory(Privileges);
}
