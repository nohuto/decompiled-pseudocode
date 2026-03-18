/*
 * XREFs of EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E4114
 * Callers:
 *     EtwpWriteUserEvent @ 0x1407B4D70 (EtwpWriteUserEvent.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsQueryProcessAttributesByToken @ 0x14070BA70 (PsQueryProcessAttributesByToken.c)
 *     EtwpQueryPsmKey @ 0x1409E41F8 (EtwpQueryPsmKey.c)
 */

void *__fastcall EtwpGetPsmKeyExtendedHeaderItem(__int64 a1)
{
  _KPROCESS *Process; // rbp
  __int64 v3; // r14
  unsigned __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rbx
  char v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0;
  v10 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = 8LL;
  v4 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
  PsQueryProcessAttributesByToken(v4, &v8, &v9);
  if ( v8 )
  {
    v10 = 466LL;
    v5 = EtwpQueryPsmKey(v4, a1 + 8, &v10);
    v6 = v10;
    if ( v5 < 0 )
      v6 = 0LL;
    v3 = v6 + 8;
  }
  else
  {
    LOWORD(v6) = v10;
  }
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.StaticBitmap[5], v4, 0x746C6644u);
  *(_DWORD *)(a1 + 2) = 9;
  *(_WORD *)(a1 + 6) = v6;
  *(_WORD *)a1 = (v3 + 7) & 0xFFF8;
  return memset((void *)(v3 + a1), 0, (((_DWORD)v3 + 7) & 0xFFFFFFF8) - v3);
}
