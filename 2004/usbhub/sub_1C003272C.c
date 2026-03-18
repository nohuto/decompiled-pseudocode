/*
 * XREFs of sub_1C003272C @ 0x1C003272C
 * Callers:
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0046144 @ 0x1C0046144 (sub_1C0046144.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C00552B8 @ 0x1C00552B8 (sub_1C00552B8.c)
 */

__int64 __fastcall sub_1C003272C(int a1, __int64 a2)
{
  int v3; // esi
  int v4; // ebx
  _DWORD *v5; // rdi
  _BYTE *PoolWithTag; // rax
  _BYTE *v8; // r14
  unsigned int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // r15d
  const WCHAR *v13; // rdx
  char v14; // al
  unsigned int v15; // ecx
  char v16; // dl
  bool v17; // zf
  const WCHAR *v18; // rdx
  _DWORD ValueData[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v20; // [rsp+A0h] [rbp+40h] BYREF
  int v21; // [rsp+A8h] [rbp+48h] BYREF

  v3 = 0;
  ValueData[0] = 0;
  v4 = a2;
  v5 = sub_1C0011220(a2);
  if ( *(_DWORD *)&stru_1C006B480.DeviceQueue.Busy == 2 )
    return 3221225659LL;
  if ( (sub_1C0046144() & 0xC0000000) == 0xC0000000 )
  {
    *(_DWORD *)&stru_1C006B480.DeviceQueue.Busy = 2;
    return 3221225659LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PoolType, 0x12uLL, 0x42554855u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = 0LL;
    *((_WORD *)PoolWithTag + 8) = 0;
    v9 = v5[358];
    if ( *(_DWORD *)&stru_1C006B480.DeviceQueue.Busy == 1 )
    {
      v9 = v9 & 0xFFFFF9FF | 0x200;
      v5[358] = v9;
    }
    if ( (v9 & 0x200) != 0 )
    {
      if ( (v9 & 0x400) != 0 )
      {
        v10 = 0;
      }
      else
      {
        LOWORD(v21) = 18;
        v11 = sub_1C00552B8(a1, v4, (unsigned int)ValueData, (_DWORD)PoolWithTag, (__int64)&v21, 0, 238);
        v12 = ValueData[0];
        v10 = v11;
        if ( ValueData[0] == -1073717248 )
        {
          v13 = (const WCHAR *)*((_QWORD *)v5 + 142);
          ValueData[0] = 1;
          RtlWriteRegistryValue(2u, v13, L"MSOSDescriptorHang", 4u, ValueData, 4u);
        }
        v5[358] &= ~0x200u;
        if ( v10 >= 0 && (_WORD)v21 == 18 && RtlCompareMemory(v8 + 2, L"MSFT100", 0xEuLL) == 14 )
        {
          v14 = v8[16];
          *((_BYTE *)v5 + 1432) = v14;
          HIBYTE(v20) = v14;
          LOBYTE(v20) = 1;
          v5[358] |= 0x400u;
        }
        else
        {
          v5[358] &= ~0x400u;
          v10 = -1073741637;
          v20 = 0;
          sub_1C004A608(
            a1,
            *((unsigned __int16 *)v5 + 714),
            102,
            (_DWORD)v8,
            (unsigned __int16)v21,
            -1073741637,
            v12,
            (__int64)aMsosC,
            193,
            0);
        }
        if ( *((_QWORD *)v5 + 142) )
        {
          RtlWriteRegistryValue(0, *((PCWSTR *)v5 + 143), L"osvc", 3u, &v20, 2u);
          v15 = v5[358] & 0xFFFF7FFF;
          v16 = v8[17] & 2;
          if ( !v16 )
            v15 = v5[358] | 0x8000;
          v17 = v16 == 0;
          v18 = (const WCHAR *)*((_QWORD *)v5 + 143);
          LOBYTE(v3) = v17;
          v5[358] = v15;
          v21 = v3;
          RtlWriteRegistryValue(0, v18, L"SkipContainerIdQuery", 3u, &v21, 4u);
        }
      }
    }
    else
    {
      v10 = -1073741637;
    }
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v10;
}
