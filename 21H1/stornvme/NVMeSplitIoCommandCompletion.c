/*
 * XREFs of NVMeSplitIoCommandCompletion @ 0x1C0013F10
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeSplitIoCommandCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  _DWORD *v7; // rdx
  unsigned __int8 v8; // cl
  unsigned int v9; // r10d
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r11
  unsigned int v16; // edx
  __int64 v17; // r9
  unsigned int v18; // edx
  bool v19; // cc
  unsigned int v20; // r8d
  _QWORD *v21; // r9
  __int64 v22; // rax
  char v23; // al
  unsigned __int64 v24; // [rsp+38h] [rbp+10h] BYREF

  result = GetSrbExtension(a2);
  v6 = result;
  if ( *(_BYTE *)(v5 + 3) != 1 )
  {
    *(_BYTE *)(result + 4253) |= 8u;
    return result;
  }
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v7 = (_DWORD *)(v5 + 60);
    v8 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v8 = *(_BYTE *)(a2 + 7);
    v7 = (_DWORD *)(v5 + 16);
  }
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v8 + 1720) + 52LL);
  v24 = *(_QWORD *)(result + 4136);
  v10 = (unsigned __int16)*(_DWORD *)(result + 4144) + 1;
  v11 = (v9 + *v7 - 1) / v9 - v10;
  v24 += v10;
  v12 = HIDWORD(v24);
  *(_DWORD *)(result + 4136) = v24;
  *(_DWORD *)(result + 4140) = v12;
  *(_WORD *)(result + 4144) = v11 - 1;
  v13 = v9 * v10;
  v14 = *(_QWORD *)(result + 4120);
  v15 = (v13 + (unsigned __int64)(v14 & 0xFFF)) >> 12;
  v16 = ((v13 + v14) & 0xFFF) + v9 * v11 + 4095;
  v17 = ((_DWORD)v13 + (_DWORD)v14) & 0xFFF;
  v18 = v16 >> 12;
  if ( !(_DWORD)v15 )
  {
    *(_QWORD *)(result + 4120) = v17 + (v14 & 0xFFFFFFFFFFFFF000uLL);
    if ( v18 != 1 )
    {
      v19 = v18 <= 2;
      if ( v18 != 2 )
        goto LABEL_18;
      *(_QWORD *)(result + 4128) = *(_QWORD *)result;
LABEL_17:
      v19 = v18 <= 2;
LABEL_18:
      if ( !v19 )
      {
        LODWORD(v24) = 0;
        *(_QWORD *)(v6 + 4128) = StorPortGetPhysicalAddress(a1, a2, v6, &v24);
      }
      goto LABEL_20;
    }
    goto LABEL_11;
  }
  *(_QWORD *)(result + 4120) = v17 + *(_QWORD *)(result + 8LL * (unsigned int)(v15 - 1));
  if ( v18 == 1 )
  {
LABEL_11:
    *(_QWORD *)(result + 4128) = 0LL;
    goto LABEL_20;
  }
  if ( v18 != 2 )
  {
    v20 = 0;
    v21 = (_QWORD *)result;
    do
    {
      v22 = v20 + (unsigned int)v15;
      ++v20;
      *v21++ = *(_QWORD *)(v6 + 8 * v22);
    }
    while ( v20 < v18 - 1 );
    goto LABEL_17;
  }
  *(_QWORD *)(result + 4128) = *(_QWORD *)(result + 8LL * (unsigned int)v15);
LABEL_20:
  *(_BYTE *)(a2 + 3) = 0;
  v23 = *(_BYTE *)(v6 + 4253);
  *(_QWORD *)(v6 + 4224) = 0LL;
  *(_BYTE *)(v6 + 4253) = v23 & 0xF8 | 6;
  return ProcessCommand(a1, a2);
}
