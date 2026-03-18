/*
 * XREFs of sub_1C0057C60 @ 0x1C0057C60
 * Callers:
 *     sub_1C0055820 @ 0x1C0055820 (sub_1C0055820.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C0029FEC @ 0x1C0029FEC (sub_1C0029FEC.c)
 */

void __fastcall sub_1C0057C60(PDEVICE_OBJECT Pdo)
{
  _DWORD *v2; // rbx
  __int64 v3; // rbp
  unsigned int Size; // r15d
  __m128 *PoolWithTag; // rax
  __m128 *Data; // rdi
  __int64 i; // r10
  NTSTATUS v8; // eax
  int updated; // eax
  unsigned __int16 v10; // dx
  __int64 v11; // rcx
  _RTL_BITMAP BitMapHeader; // [rsp+40h] [rbp-28h] BYREF

  BitMapHeader = 0LL;
  v2 = sub_1C0011220((__int64)Pdo);
  v3 = *((_QWORD *)v2 + 301);
  Size = 8 * *(unsigned __int8 *)(v3 + 4) + 4;
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PagedPool, Size, 0x42554855u);
  Data = PoolWithTag;
  if ( PoolWithTag )
  {
    sub_1C001D340(PoolWithTag, 0, Size);
    Data->m128_i8[0] = *(_BYTE *)(v3 + 4);
    Data->m128_i8[1] = *(_BYTE *)(v3 + 5);
    RtlInitializeBitMap(&BitMapHeader, (PULONG)(v3 + 8), 0x20u);
    for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v3 + 4); i = (unsigned int)(i + 1) )
    {
      Data->m128_i16[4 * i + 2] = *(_WORD *)(v3 + 4 * i + 44);
      Data->m128_i8[8 * i + 6] = *(_BYTE *)(v3 + 4 * i + 46);
      Data->m128_i32[2 * i + 2] = _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(2 * i)) | (2 * _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(2 * i + 1)));
    }
    v8 = IoSetDevicePropertyData(Pdo, &PropertyKey, 0, 0, 0x1003u, Size, Data);
    if ( v8 >= 0 )
    {
      updated = ZwUpdateWnfStateData(&unk_1C0062160, 0LL, 0LL);
      if ( updated < 0 )
        sub_1C000FD80(*((_QWORD *)v2 + 148), 256, 1885626931, updated, (__int64)Pdo);
      v10 = *((_WORD *)v2 + 714);
      v11 = *((_QWORD *)v2 + 148);
      *((_BYTE *)v2 + 2432) = 0;
      sub_1C0029FEC(v11, v10, (struct _UNICODE_STRING *)v2 + 151, (_BYTE *)v2 + 2432, Size, (__int64)Data);
    }
    else
    {
      sub_1C000FD80(*((_QWORD *)v2 + 148), 256, 1885626930, v8, (__int64)Pdo);
    }
    ExFreePoolWithTag(Data, 0);
  }
  else
  {
    sub_1C000FD80(*((_QWORD *)v2 + 148), 256, 1885496369, Size, (__int64)Pdo);
  }
}
