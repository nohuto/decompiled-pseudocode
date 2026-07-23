/*
 * XREFs of MiSectionInitialization @ 0x140A56074
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     ObInsertObject @ 0x1406AB4A0 (ObInsertObject.c)
 *     ObCreateObject @ 0x1406ABDC0 (ObCreateObject.c)
 *     ObCreateObjectType @ 0x140795AD0 (ObCreateObjectType.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 MiSectionInitialization()
{
  _QWORD *Pool; // rbx
  UNICODE_STRING v2; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v3[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v4[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v5; // [rsp+78h] [rbp-88h]
  _QWORD *v6; // [rsp+80h] [rbp-80h]
  int v7; // [rsp+88h] [rbp-78h]
  int v8; // [rsp+8Ch] [rbp-74h]
  __int128 v9; // [rsp+90h] [rbp-70h]
  _QWORD v10[16]; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+138h] [rbp+38h] BYREF

  v4[1] = 0;
  v8 = 0;
  Handle = 0LL;
  dword_140C4ED90 = -1;
  qword_140C4C9C8 = 0LL;
  v2.Buffer = L"Section";
  v3[1] = L"\\Device\\PhysicalMemory";
  *(_QWORD *)&v2.Length = 1048590LL;
  v3[0] = 3014700LL;
  memset(v10, 0, 0x78uLL);
  BYTE2(v10[0]) |= 4u;
  v10[7] = MiSectionOpen;
  LOWORD(v10[0]) = 120;
  v10[8] = MiSectionClose;
  HIDWORD(v10[4]) = 1;
  v10[9] = MiSectionDelete;
  LODWORD(v10[1]) = 256;
  LODWORD(v10[5]) = 64;
  HIDWORD(v10[3]) = 983071;
  *(_OWORD *)((char *)&v10[1] + 4) = MiSectionMapping;
  HIDWORD(v10[0]) = 128;
  if ( (int)ObCreateObjectType(&v2, (__int64)v10, 0LL, (__int64)&MmSectionObjectType) >= 0 )
  {
    Pool = MiAllocatePool(256, 0x48uLL, 0x67536D4Du);
    if ( Pool )
    {
      memset(&qword_140C4C9F0, 0, 0x110uLL);
      Pool[5] = 0LL;
      dword_140C4CAB8 |= 0x400u;
      v5 = 0LL;
      v6 = v3;
      qword_140C4C9F0 = (__int64)&qword_140C4CA80;
      qword_140C4CA80 = (__int64)Pool;
      qword_140C4CA98 = 1LL;
      *Pool = &qword_140C4CA80;
      v4[0] = 48;
      v7 = 65552;
      v9 = 0LL;
      if ( (int)ObCreateObject(0, (int)MmSectionObjectType, (int)v4, 0) < 0 )
      {
        ExFreePoolWithTag(Pool, 0);
      }
      else
      {
        MEMORY[0x28] = &qword_140C4CA80;
        MEMORY[0x30] = 0xFFFFFFFFFFFFLL;
        MEMORY[0x38] = 0;
        MEMORY[0x3C] = MEMORY[0x3C] & 0xFFFFF000 | 0x40;
        if ( ObInsertObject(0LL, 0LL, 4u, 0, 0LL, &Handle) >= 0 )
        {
          ObCloseHandle(Handle, 0);
          return 1LL;
        }
      }
    }
  }
  return 0LL;
}
