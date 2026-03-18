/*
 * XREFs of MiSectionInitialization @ 0x140A4D6EC
 * Callers:
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     ObInsertObject @ 0x140642820 (ObInsertObject.c)
 *     ObCreateObject @ 0x140643F10 (ObCreateObject.c)
 *     ObCreateObjectType @ 0x14077E620 (ObCreateObjectType.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 MiSectionInitialization()
{
  _QWORD *Pool; // rbx
  _QWORD *v1; // rcx
  UNICODE_STRING v3; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v4[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v5[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v6; // [rsp+78h] [rbp-88h]
  _QWORD *v7; // [rsp+80h] [rbp-80h]
  int v8; // [rsp+88h] [rbp-78h]
  int v9; // [rsp+8Ch] [rbp-74h]
  __int128 v10; // [rsp+90h] [rbp-70h]
  _QWORD v11[16]; // [rsp+A0h] [rbp-60h] BYREF
  PVOID Object; // [rsp+130h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+138h] [rbp+38h] BYREF

  v5[1] = 0;
  v9 = 0;
  Object = 0LL;
  Handle = 0LL;
  dword_140C4EC90 = -1;
  qword_140C4C8C8 = 0LL;
  v3.Buffer = L"Section";
  v4[1] = L"\\Device\\PhysicalMemory";
  *(_QWORD *)&v3.Length = 1048590LL;
  v4[0] = 3014700LL;
  memset(v11, 0, 0x78uLL);
  BYTE2(v11[0]) |= 4u;
  v11[7] = MiSectionOpen;
  LOWORD(v11[0]) = 120;
  v11[8] = MiSectionClose;
  HIDWORD(v11[4]) = 1;
  v11[9] = MiSectionDelete;
  LODWORD(v11[1]) = 256;
  LODWORD(v11[5]) = 64;
  HIDWORD(v11[3]) = 983071;
  *(_OWORD *)((char *)&v11[1] + 4) = MiSectionMapping;
  HIDWORD(v11[0]) = 128;
  if ( (int)ObCreateObjectType(&v3, (__int64)v11, 0LL, (__int64)&MmSectionObjectType) >= 0 )
  {
    Pool = MiAllocatePool(256, 0x48uLL, 0x67536D4Du);
    if ( Pool )
    {
      memset(&qword_140C4C8F0, 0, 0x110uLL);
      Pool[5] = 0LL;
      dword_140C4C9B8 |= 0x400u;
      v6 = 0LL;
      v7 = v4;
      qword_140C4C8F0 = (__int64)&qword_140C4C980;
      qword_140C4C980 = (__int64)Pool;
      qword_140C4C998 = 1LL;
      *Pool = &qword_140C4C980;
      v5[0] = 48;
      v8 = 65552;
      v10 = 0LL;
      if ( (int)ObCreateObject(0, MmSectionObjectType, (__int64)v5, 0, 0, 64, 64, 0, &Object) < 0 )
      {
        ExFreePoolWithTag(Pool, 0);
      }
      else
      {
        v1 = Object;
        *((_QWORD *)Object + 5) = &qword_140C4C980;
        v1[6] = 0xFFFFFFFFFFFFLL;
        *((_DWORD *)v1 + 14) = 0;
        *((_DWORD *)v1 + 15) = *((_DWORD *)v1 + 15) & 0xFFFFF000 | 0x40;
        if ( ObInsertObject(v1, 0LL, 4u, 0, 0LL, &Handle) >= 0 )
        {
          ObCloseHandle(Handle, 0);
          return 1LL;
        }
      }
    }
  }
  return 0LL;
}
