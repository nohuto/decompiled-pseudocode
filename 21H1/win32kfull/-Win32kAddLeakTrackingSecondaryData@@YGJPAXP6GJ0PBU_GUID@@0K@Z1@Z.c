/*
 * XREFs of ?Win32kAddLeakTrackingSecondaryData@@YGJPAXP6GJ0PBU_GUID@@0K@Z1@Z @ 0x18348F
 * Callers:
 *     ?Win32kLeakTrackingLiveDumpCallback@@YGJPAXP6GJ0PBU_GUID@@0K@ZKKKKK0@Z @ 0x18354A (-Win32kLeakTrackingLiveDumpCallback@@YGJPAXP6GJ0PBU_GUID@@0K@ZKKKKK0@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAU_DUMP_CONTEXT@2@@Z @ 0x249C82 (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAU_DUMP_CONTEXT@2@@Z.c)
 */

int __userpurge Win32kAddLeakTrackingSecondaryData@<eax>(
        int (__stdcall *a1)(NSInstrumentation::CLeakTrackingAllocator *, int *, _DWORD *, SIZE_T)@<edx>,
        NSInstrumentation::CLeakTrackingAllocator *a2@<ecx>,
        int *a3,
        int (__stdcall *a4)(void *, const struct _GUID *, void *, unsigned int),
        const struct _GUID *a5)
{
  SIZE_T v5; // ebx
  _DWORD *PoolWithTag; // eax
  NSInstrumentation::CLeakTrackingAllocator *v8; // ecx
  _DWORD *v9; // edi
  int v10; // esi
  SIZE_T v11; // [esp-4h] [ebp-40h]
  char *v14; // [esp+1Ch] [ebp-20h] BYREF
  SIZE_T NumberOfBytes; // [esp+20h] [ebp-1Ch]
  int v16; // [esp+24h] [ebp-18h]
  int v17; // [esp+28h] [ebp-14h]
  int v18; // [esp+2Ch] [ebp-10h]
  int v19; // [esp+30h] [ebp-Ch]

  v14 = 0;
  NumberOfBytes = 8;
  v16 = *a3;
  v17 = a3[1];
  v18 = a3[2];
  v19 = a3[3];
  NSInstrumentation::CLeakTrackingAllocator::Dump(a2, (struct NSInstrumentation::_DUMP_CONTEXT *)&v14);
  v5 = NumberOfBytes;
  if ( NumberOfBytes <= 8 )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, NumberOfBytes, 0x746C7355u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741801;
  v14 = (char *)(PoolWithTag + 2);
  NumberOfBytes = v5 - 8;
  NSInstrumentation::CLeakTrackingAllocator::Dump(v8, (struct NSInstrumentation::_DUMP_CONTEXT *)&v14);
  if ( NumberOfBytes < v5 - 8 )
  {
    v11 = v5 - NumberOfBytes;
    *v9 = v5 - NumberOfBytes;
    v9[1] = 1;
    v10 = a1(a2, a3, v9, v11);
  }
  else
  {
    v10 = -1073741675;
  }
  ExFreePoolWithTag(v9, 0);
  return v10;
}
