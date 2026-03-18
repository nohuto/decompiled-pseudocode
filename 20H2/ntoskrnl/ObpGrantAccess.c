/*
 * XREFs of ObpGrantAccess @ 0x1405E08CC
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1405DFEC4 (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x140677E70 (ObDuplicateObject.c)
 * Callees:
 *     ObCheckObjectAccess @ 0x1405E0970 (ObCheckObjectAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x1406BD90C (ObpAdjustCreatorAccessState.c)
 */

__int64 __fastcall ObpGrantAccess(int a1, void *a2, struct _ACCESS_STATE *a3, __int64 a4, __int64 a5, ACCESS_MASK *a6)
{
  __int64 result; // rax
  NTSTATUS v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  if ( (unsigned int)(a1 - 1) > 1 )
  {
    result = ObpAdjustCreatorAccessState(a3);
    if ( (int)result >= 0 )
      goto LABEL_3;
  }
  else
  {
    if ( (unsigned __int8)ObCheckObjectAccess(a2, a3, &v8) )
    {
LABEL_3:
      *a6 = a3->PreviouslyGrantedAccess;
      return 0LL;
    }
    return (unsigned int)v8;
  }
  return result;
}
