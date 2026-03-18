/*
 * XREFs of ObpGrantAccess @ 0x1406BBB08
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140616B1C (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x14061ECE0 (ObDuplicateObject.c)
 * Callees:
 *     ObpAdjustCreatorAccessState @ 0x140616FB4 (ObpAdjustCreatorAccessState.c)
 *     ObCheckObjectAccess @ 0x1406BBBB0 (ObCheckObjectAccess.c)
 */

__int64 __fastcall ObpGrantAccess(
        int a1,
        char *a2,
        struct _ACCESS_STATE *a3,
        KPROCESSOR_MODE a4,
        __int16 a5,
        ACCESS_MASK *a6)
{
  unsigned __int64 v8; // r11
  KPROCESSOR_MODE v9; // dl
  unsigned __int64 v10; // r11
  __int64 result; // rax
  NTSTATUS v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  v8 = (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8);
  v9 = 1;
  v10 = (unsigned __int8)ObHeaderCookie ^ v8;
  if ( (a5 & 0x400) == 0 )
    v9 = a4;
  if ( (unsigned int)(a1 - 1) > 1 )
  {
    result = ObpAdjustCreatorAccessState(a3, v9, ObTypeIndexTable[v10], (__int64)a2);
    if ( (int)result >= 0 )
      goto LABEL_5;
  }
  else
  {
    if ( (unsigned __int8)ObCheckObjectAccess(a2, a3, &v12) )
    {
LABEL_5:
      *a6 = a3->PreviouslyGrantedAccess;
      return 0LL;
    }
    return (unsigned int)v12;
  }
  return result;
}
