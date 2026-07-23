/*
 * XREFs of MiZeroPageWrite @ 0x14023E168
 * Callers:
 *     MmZeroPageWrite @ 0x14023E0E8 (MmZeroPageWrite.c)
 * Callees:
 *     MiIsRetryIoStatus @ 0x140276E54 (MiIsRetryIoStatus.c)
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     IoSynchronousPageWriteEx @ 0x140326B5C (IoSynchronousPageWriteEx.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiRetardMdl @ 0x140530F30 (MiRetardMdl.c)
 */

__int64 __fastcall MiZeroPageWrite(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r15
  PMDL Mdl; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdi
  CSHORT MdlFlags; // r12
  CSHORT v11; // r12
  PMDL v12; // rdx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r13
  CSHORT v17; // ax
  _QWORD *p_Next; // rcx
  __int64 v19; // rdx
  int v20; // r15d
  CSHORT v21; // ax
  int v23; // [rsp+40h] [rbp-C0h]
  __int16 v24; // [rsp+48h] [rbp-B8h]
  __int16 Object; // [rsp+50h] [rbp-B0h] BYREF
  char v26; // [rsp+52h] [rbp-AEh]
  char v27; // [rsp+53h] [rbp-ADh]
  int v28; // [rsp+54h] [rbp-ACh]
  _QWORD v29[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v30; // [rsp+68h] [rbp-98h]
  _DWORD v31[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h]
  _BYTE MemoryDescriptorList[176]; // [rsp+90h] [rbp-70h] BYREF

  v31[1] = 0;
  v5 = a3;
  v30 = a2;
  v33 = a1;
  v24 = a3;
  v27 = 0;
  memset(MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
  Mdl = 0LL;
  v7 = (unsigned int)v5;
  v8 = (unsigned __int64)(v5 + 4095) >> 12;
  if ( a4 && (unsigned int)v5 > a4 )
    v7 = a4;
  if ( (unsigned int)v7 > 0x10000 )
    Mdl = IoAllocateMdl(0LL, v7, 0, 0, 0LL);
  v9 = (unsigned __int64)(v7 + 4095) >> 12;
  if ( Mdl )
  {
    MdlFlags = Mdl->MdlFlags;
  }
  else
  {
    MdlFlags = 0;
    Mdl = (PMDL)MemoryDescriptorList;
    if ( (unsigned int)v9 > 0x10 )
      LODWORD(v9) = 16;
  }
  v23 = 0;
  v11 = MdlFlags | 0x4002;
  v12 = Mdl + 1;
  LODWORD(v13) = v9;
  while ( 1 )
  {
    v14 = v8;
    if ( (unsigned int)v13 <= (unsigned int)v8 )
      v14 = v13;
    v13 = v14;
    v15 = v14 << 12;
    if ( (_DWORD)v8 == v14 )
    {
      LODWORD(v9) = v8;
      if ( (v5 & 0xFFF) != 0 )
        v15 = (v5 & 0xFFF | (unsigned int)v15) - 4096;
    }
    v16 = (unsigned int)v15;
    Mdl->ByteCount = v15;
    v17 = 8 * (((unsigned __int64)(v15 + 4095) >> 12) + 6);
    p_Next = &v12->Next;
    Mdl->Next = 0LL;
    Mdl->Size = v17;
    Mdl->StartVa = 0LL;
    Mdl->ByteOffset = 0;
    Mdl->MdlFlags = v11;
    if ( (_DWORD)v13 )
    {
      v19 = v13;
      do
      {
        *p_Next++ = qword_140C4EDC0;
        --v19;
      }
      while ( v19 );
    }
    Object = 0;
    v29[1] = v29;
    v28 = 0;
    v29[0] = v29;
    v31[0] = 0;
    v32 = 0LL;
    v26 = 6;
    v20 = IoSynchronousPageWriteEx(v33, (_DWORD)Mdl, (_DWORD)v30, (unsigned int)&Object, 0, 0LL, (__int64)v31);
    if ( v20 >= 0 )
    {
      KeWaitForSingleObject(&Object, WrPageOut, 0, 0, 0LL);
      v20 = v31[0];
    }
    v21 = Mdl->MdlFlags;
    if ( (v21 & 0x200) != 0 )
    {
      MiRetardMdl(Mdl);
      v21 = Mdl->MdlFlags;
    }
    if ( (v21 & 1) != 0 )
      MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
    if ( v20 < 0 )
      break;
    LODWORD(v8) = v8 - v13;
    *v30 += v16;
    if ( v23 )
    {
      --v23;
    }
    else if ( (unsigned int)v13 < (unsigned int)v9 )
    {
      LODWORD(v13) = v9;
    }
LABEL_25:
    v12 = Mdl + 1;
    if ( !(_DWORD)v8 )
      goto LABEL_26;
    LOWORD(v5) = v24;
  }
  v23 = 8;
  if ( (unsigned int)MiIsRetryIoStatus((unsigned int)v20, v16, 0LL) && (_DWORD)v13 != 1 )
  {
    LODWORD(v13) = (unsigned int)v13 >> 1;
    goto LABEL_25;
  }
LABEL_26:
  if ( Mdl != (PMDL)MemoryDescriptorList )
    IoFreeMdl(Mdl);
  return (unsigned int)v20;
}
