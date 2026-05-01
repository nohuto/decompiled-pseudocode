/*
 * XREFs of sub_180009F08 @ 0x180009F08
 * Callers:
 *     sub_1800090D8 @ 0x1800090D8 (sub_1800090D8.c)
 *     sub_1800098DC @ 0x1800098DC (sub_1800098DC.c)
 *     sub_180009C10 @ 0x180009C10 (sub_180009C10.c)
 *     sub_180069F50 @ 0x180069F50 (sub_180069F50.c)
 *     sub_180069FB0 @ 0x180069FB0 (sub_180069FB0.c)
 *     sub_18006A010 @ 0x18006A010 (sub_18006A010.c)
 *     sub_18006A0C0 @ 0x18006A0C0 (sub_18006A0C0.c)
 *     sub_18006A140 @ 0x18006A140 (sub_18006A140.c)
 *     sub_18006DD8C @ 0x18006DD8C (sub_18006DD8C.c)
 *     sub_1800739C4 @ 0x1800739C4 (sub_1800739C4.c)
 *     sub_18007C128 @ 0x18007C128 (sub_18007C128.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_180009F08(void **a1, ACCESS_MASK a2, unsigned int a3)
{
  unsigned __int128 v4; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v5; // [rsp+30h] [rbp-38h] BYREF

  v5.Length = 48;
  memset(&v5.RootDirectory, 0, 20);
  v4 = a3;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  return NtOpenProcess(a1, a2, &v5, (PCLIENT_ID)&v4);
}
