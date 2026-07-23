/*
 * XREFs of MiInitializeSessionIds @ 0x140A530EC
 * Callers:
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObCreateObjectType @ 0x14077DE10 (ObCreateObjectType.c)
 */

__int64 MiInitializeSessionIds()
{
  _RTL_BITMAP *Pool; // rax
  __int64 result; // rax
  UNICODE_STRING v2; // [rsp+30h] [rbp-49h] BYREF
  ULONG_PTR BugCheckParameter3[16]; // [rsp+40h] [rbp-39h] BYREF

  qword_140C4DBB8 = 0LL;
  v2.Buffer = L"Session";
  *(_QWORD *)&v2.Length = 1048590LL;
  Pool = (_RTL_BITMAP *)MiAllocatePool(256, 0x20uLL, 0x20206D4Du);
  qword_140C4ED10 = Pool;
  if ( !Pool || (Pool->SizeOfBitMap = 128, Pool->Buffer = &Pool[1].SizeOfBitMap, !qword_140C4ED10) )
    KeBugCheckEx(0x7Du, qword_140C52690, qword_140C52680, ::BugCheckParameter3, 0x200uLL);
  memset(
    qword_140C4ED10->Buffer,
    0,
    4 * ((qword_140C4ED10->SizeOfBitMap >> 5) + ((qword_140C4ED10->SizeOfBitMap & 0x1F) != 0)));
  qword_140C4DBE8 = 0LL;
  LOWORD(stru_140C4DBF0.Header.Lock) = 0;
  stru_140C4DBF0.Header.SignalState = 0;
  stru_140C4DBF0.Header.WaitListHead.Blink = &stru_140C4DBF0.Header.WaitListHead;
  stru_140C4DBF0.Header.WaitListHead.Flink = &stru_140C4DBF0.Header.WaitListHead;
  stru_140C4DBF0.Header.Size = 6;
  memset(BugCheckParameter3, 0, 0x78uLL);
  LODWORD(BugCheckParameter3[1]) = 0;
  BYTE2(BugCheckParameter3[0]) |= 0xCu;
  LOWORD(BugCheckParameter3[0]) = 120;
  HIDWORD(BugCheckParameter3[4]) = 512;
  HIDWORD(BugCheckParameter3[5]) = 40;
  *(_OWORD *)((char *)&BugCheckParameter3[1] + 4) = MiSessionMapping;
  HIDWORD(BugCheckParameter3[3]) = 983043;
  BugCheckParameter3[9] = (ULONG_PTR)MiSessionObjectDelete;
  result = ObCreateObjectType(&v2, (__int64)BugCheckParameter3, 0LL, (__int64)&MmSessionObjectType);
  if ( (int)result < 0 )
    KeBugCheckEx(0x1Au, 0x1237uLL, (int)result, (ULONG_PTR)BugCheckParameter3, 0LL);
  return result;
}
