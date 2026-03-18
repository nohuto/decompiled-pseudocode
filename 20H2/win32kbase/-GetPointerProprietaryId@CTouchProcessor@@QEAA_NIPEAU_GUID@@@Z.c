/*
 * XREFs of ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x1C0190C38
 * Callers:
 *     NtUserGetPointerProprietaryId @ 0x1C0132040 (NtUserGetPointerProprietaryId.c)
 * Callees:
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018B718 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

char __fastcall CTouchProcessor::GetPointerProprietaryId(CTouchProcessor *this, unsigned __int16 a2, struct _GUID *a3)
{
  CTouchProcessor *v3; // rsi
  struct CInputPointerNode *NodeById; // rax
  char v7; // bl

  v3 = gpTouchProcessor;
  *a3 = 0LL;
  ExEnterCriticalRegionAndAcquireResourceShared(*((PERESOURCE *)v3 + 5));
  NodeById = CTouchProcessor::FindNodeById((struct _KTHREAD **)v3, a2, 0, 0);
  if ( !NodeById
    || *(_QWORD *)((char *)NodeById + 36) == *(_QWORD *)&a3->Data1
    && *(_QWORD *)((char *)NodeById + 44) == *(_QWORD *)a3->Data4 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    *a3 = *(struct _GUID *)((char *)NodeById + 36);
  }
  *((_QWORD *)v3 + 9) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(*((PERESOURCE *)v3 + 5));
  return v7;
}
