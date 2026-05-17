/*
 * XREFs of _RtlpHpRegisterEnvironment@8 @ 0x4B3798A7
 * Callers:
 *     _RtlpHpHeapCreate@20 @ 0x4B378A0E (_RtlpHpHeapCreate@20.c)
 *     _RtlpHpHeapDestroy@4 @ 0x4B378C76 (_RtlpHpHeapDestroy@4.c)
 * Callees:
 *     _RtlpHpVaMgrCtxAllocatorDereference@8 @ 0x4B37AAD7 (_RtlpHpVaMgrCtxAllocatorDereference@8.c)
 *     _RtlpHpVaMgrCtxAllocatorReference@12 @ 0x4B37AB82 (_RtlpHpVaMgrCtxAllocatorReference@12.c)
 */

int __fastcall RtlpHpRegisterEnvironment(unsigned int *a1, int a2)
{
  int v3; // edi
  unsigned int v4; // ecx
  unsigned int v5; // edx
  unsigned __int8 v6; // ah
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v11; // [esp+10h] [ebp-20h]
  unsigned int v12; // [esp+14h] [ebp-1Ch]
  _DWORD v13[3]; // [esp+1Ch] [ebp-14h] BYREF
  int v14; // [esp+28h] [ebp-8h]
  unsigned int v15; // [esp+2Ch] [ebp-4h]

  v3 = 0;
  v4 = *a1;
  v5 = a1[1];
  v12 = v4;
  v11 = v5;
  v14 = 0;
  if ( HIBYTE(v4) )
    v13[0] = HIBYTE(v4) - 1;
  else
    v13[0] = -1;
  v6 = BYTE1(v4);
  v7 = HIWORD(v4);
  v13[1] = v6;
  v13[2] = (unsigned __int8)v7;
  if ( (v12 & 8) != 0 )
    v14 = 1;
  v15 = v5;
  if ( a2 )
  {
    v8 = RtlpHpVaMgrCtxAllocatorReference(v7);
    if ( v8 == -1 )
    {
      return -1073741670;
    }
    else
    {
      HIBYTE(v12) = v8 + 1;
      *a1 = v12;
      a1[1] = v11;
    }
  }
  else
  {
    RtlpHpVaMgrCtxAllocatorDereference(&unk_4B3A6DF0, v13);
  }
  return v3;
}
