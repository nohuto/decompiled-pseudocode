/*
 * XREFs of EtwpObjectTypeRundown @ 0x140939904
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140780158 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402085B0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQueryObject @ 0x1403F2530 (ZwQueryObject.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpObjectTypeRundown(__int64 a1, char a2)
{
  unsigned __int16 *PoolWithTag; // rbx
  NTSTATUS Object; // eax
  __int16 v6; // r14
  unsigned __int16 *v7; // rdi
  unsigned __int16 v8; // r14
  unsigned int i; // esi
  __int16 v10; // ax
  unsigned int v11; // r8d
  __int64 v12; // rdx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-40h] BYREF
  __int16 v14; // [rsp+38h] [rbp-38h]
  char *v15; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+48h] [rbp-28h]
  int v17; // [rsp+4Ch] [rbp-24h]
  __int64 v18; // [rsp+50h] [rbp-20h]
  int v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+5Ch] [rbp-14h]

  NumberOfBytes = 1024LL;
  PoolWithTag = 0LL;
  v14 = 0;
  while ( 1 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74777445u);
    if ( !PoolWithTag )
      break;
    Object = ZwQueryObject(0LL, ObjectTypesInformation, PoolWithTag, NumberOfBytes, (PULONG)&NumberOfBytes);
    if ( Object != -1073741820 )
    {
      if ( Object >= 0 )
      {
        v16 = 4;
        v6 = -(a2 != 0);
        v15 = (char *)&NumberOfBytes + 4;
        v17 = 0;
        v7 = PoolWithTag + 4;
        v8 = v6 + 4389;
        for ( i = 0;
              i < *(_DWORD *)PoolWithTag;
              v7 = (unsigned __int16 *)((char *)v7 + ((v7[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 104) )
        {
          if ( i )
          {
            v10 = *((unsigned __int8 *)v7 + 90);
            v20 = 0;
            v11 = *(_DWORD *)a1;
            v12 = *(_QWORD *)(a1 + 1112);
            WORD2(NumberOfBytes) = v10;
            v18 = *((_QWORD *)v7 + 1);
            v19 = *v7 + 2;
            EtwpLogKernelEvent((__int64)&v15, v12, v11, 2u, v8, 0x401802u);
          }
          ++i;
        }
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      return;
    }
  }
}
