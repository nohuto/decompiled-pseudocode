/*
 * XREFs of ?CompareDeviceVIDPID@@YGHU_UNICODE_STRING@@PAU_KEY_VALUE_FULL_INFORMATION@@K@Z @ 0x183A71
 * Callers:
 *     ?IsDeviceOnRegistryList@@YGHU_UNICODE_STRING@@0H@Z @ 0xE6E1A (-IsDeviceOnRegistryList@@YGHU_UNICODE_STRING@@0H@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge CompareDeviceVIDPID@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct _UNICODE_STRING a3,
        struct _KEY_VALUE_FULL_INFORMATION *a4,
        unsigned int a5)
{
  __int16 *v5; // ebx
  int v6; // edi
  unsigned int v7; // ecx
  __int16 v8; // ax
  int v9; // edx
  unsigned int v10; // esi
  SIZE_T v11; // esi
  __int16 *Source2; // [esp+Ch] [ebp-8h]

  v5 = (__int16 *)(a2 + 20);
  Source2 = v5;
  v6 = 0;
  v7 = *(_DWORD *)(a2 + 16) >> 1;
  v8 = *v5;
  v9 = a1 + 1;
  v10 = 0;
  if ( *v5 )
  {
    do
    {
      if ( v10 > v7 )
        break;
      if ( v10 >= 0x45 )
        break;
      if ( v8 == 38 && ++v6 == v9 )
        break;
      ++v5;
      ++v10;
      v8 = *v5;
    }
    while ( *v5 );
    v6 = 0;
  }
  v11 = 2 * v10;
  if ( v11 >= 0x2A && a3.Length >= v11 && RtlCompareMemory(a3.Buffer, Source2, v11) == v11 )
    return 1;
  return v6;
}
