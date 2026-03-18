/*
 * XREFs of PspSiloInitializeIsMultiSessionSku @ 0x140902798
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409022A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x1402E1A10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     ExIsMultiSessionSku @ 0x1407BBEF8 (ExIsMultiSessionSku.c)
 */

__int64 __fastcall PspSiloInitializeIsMultiSessionSku(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *v2; // rbx
  int IsMultiSessionSku; // edi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  Blink = a1[79].Blink;
  v5 = 0;
  v2 = PsAttachSiloToCurrentThread(a1);
  IsMultiSessionSku = ExIsMultiSessionSku(&v5);
  PsDetachSiloFromCurrentThread(v2);
  if ( IsMultiSessionSku >= 0 )
    BYTE4(Blink[69].Blink[1].Blink) = v5;
  return (unsigned int)IsMultiSessionSku;
}
