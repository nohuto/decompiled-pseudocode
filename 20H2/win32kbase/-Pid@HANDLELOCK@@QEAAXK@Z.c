/*
 * XREFs of ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C003EA1C
 * Callers:
 *     GreSetBrushOwner @ 0x1C001C210 (GreSetBrushOwner.c)
 *     HmgSetOwner @ 0x1C003D030 (HmgSetOwner.c)
 *     GreSetDCOwnerEx @ 0x1C004A4E0 (GreSetDCOwnerEx.c)
 * Callees:
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C003EAF0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0128CF8 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall HANDLELOCK::Pid(HANDLELOCK *this, int a2)
{
  __int64 v2; // r14
  GdiHandleManager *v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r10
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int8 v11; // cl
  char EtwGdiHandleType; // al
  _QWORD *v13; // r9
  int v14; // ecx
  int v15; // r8d

  *(_DWORD *)(*(_QWORD *)this + 8LL) = a2 ^ (a2 ^ *(_DWORD *)(*(_QWORD *)this + 8LL)) & 1;
  v2 = *(_QWORD *)this;
  v3 = gpHandleManager;
  v4 = GdiHandleManager::DecodeIndex(gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v5 = *((_QWORD *)v3 + 2);
  v6 = 0LL;
  v7 = v4;
  v8 = *(unsigned int *)(v5 + 2056);
  v9 = (unsigned int)v8 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16);
  if ( v4 < (unsigned int)v9 )
  {
    if ( v4 >= (unsigned int)v8 )
      v9 = ((v4 - (unsigned int)v8) >> 16) + 1;
    else
      v9 = 0LL;
    v10 = *(_QWORD *)(v5 + 8LL * (unsigned int)v9 + 8);
    if ( (_DWORD)v9 )
      v7 = (unsigned int)(((1 - (_DWORD)v9) << 16) - v8 + v7);
    if ( (unsigned int)v7 < *(_DWORD *)(v10 + 20) )
    {
      v11 = v7;
      v7 >>= 8;
      v9 = 2LL * v11;
      v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * v7) + 8 * v9 + 8);
    }
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
  {
    LOBYTE(v9) = *(_BYTE *)(v2 + 14);
    EtwGdiHandleType = GetEtwGdiHandleType(v9, v7, v8, v6);
    McTemplateK0pqqq_EtwWriteTransfer(v14, (unsigned int)&GdiUpdateHandleOwner, v15, *v13, EtwGdiHandleType);
  }
}
