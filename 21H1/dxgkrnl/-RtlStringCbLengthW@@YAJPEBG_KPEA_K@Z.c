/*
 * XREFs of ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0021D58
 * Callers:
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C016D260 (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 *     ?InitializeDisplayUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C016E5DC (-InitializeDisplayUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 *     ?InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C016EB08 (-InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 *     DpiAppendStringToString @ 0x1C016EBCC (DpiAppendStringToString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbLengthW(const unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 i; // r8
  signed int v7; // ecx

  v3 = a2 >> 1;
  v5 = 0LL;
  if ( a1 && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*a1 )
        break;
      ++a1;
    }
    v7 = i == 0 ? 0xC000000D : 0;
    if ( i )
      v5 = v3 - i;
    else
      v5 = 0LL;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( a3 )
  {
    if ( v7 < 0 )
      *a3 = 0LL;
    else
      *a3 = 2 * v5;
  }
  return (unsigned int)v7;
}
