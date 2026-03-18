/*
 * XREFs of NVMeGetLogPageCompletion @ 0x1C0017D20
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     ProcessNvmeHealthInfoLog @ 0x1C00035C0 (ProcessNvmeHealthInfoLog.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     GetLocalCommand @ 0x1C000A338 (GetLocalCommand.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C0018BBC (NVMeIssueAsyncEventCommand.c)
 *     NVMeReenumerateNameSpaceStart @ 0x1C0019C00 (NVMeReenumerateNameSpaceStart.c)
 */

__int64 __fastcall NVMeGetLogPageCompletion(__int64 a1, __int64 a2)
{
  __int64 LocalCommand; // rdi
  __int64 v4; // r11
  __int64 result; // rax
  __int64 v6; // r11
  __int64 v7; // rbx
  char v8; // bp
  char v9; // dl
  __int64 v10; // rcx
  char v11; // al
  void *v12; // rcx
  __int64 v13; // rax

  LocalCommand = GetLocalCommand(a1, a2);
  result = GetSrbExtension(v4);
  v7 = result;
  v8 = 0;
  if ( LocalCommand )
  {
    v9 = *(_BYTE *)(v6 + 3);
    if ( v9 == 14 || (result = *(unsigned int *)(a1 + 24), (result & 0xE) != 0) )
    {
      if ( *(_QWORD *)(v7 + 4200) )
      {
        result = NVMeFreeDmaBuffer(
                   a1,
                   *(unsigned int *)(*(_QWORD *)(LocalCommand + 96) + 4240LL),
                   *(_QWORD *)(LocalCommand + 96) + 4200LL,
                   *(_QWORD *)(*(_QWORD *)(LocalCommand + 96) + 4208LL));
        *(_DWORD *)(v7 + 4240) = 0;
      }
      *(_BYTE *)(v7 + 4253) |= 8u;
    }
    else
    {
      v10 = *(_QWORD *)(LocalCommand + 96);
      if ( *(_QWORD *)(v7 + 4200) )
      {
        if ( v9 == 1 )
        {
          v11 = *(_BYTE *)(v10 + 4136);
          if ( v11 != 1 )
          {
            if ( v11 == 2 )
            {
              v8 = ProcessNvmeHealthInfoLog(a1, v6, *(char **)(v10 + 4200), 9);
            }
            else if ( v11 == 4 && **(_DWORD **)(v10 + 4200) )
            {
              NVMeReenumerateNameSpaceStart(a1);
            }
          }
        }
        NVMeFreeDmaBuffer(
          a1,
          *(unsigned int *)(*(_QWORD *)(LocalCommand + 96) + 4240LL),
          *(_QWORD *)(LocalCommand + 96) + 4200LL,
          *(_QWORD *)(*(_QWORD *)(LocalCommand + 96) + 4208LL));
        *(_BYTE *)(v7 + 4253) |= 8u;
        *(_DWORD *)(v7 + 4240) = 0;
      }
      *(_DWORD *)LocalCommand = 0;
      if ( v8 )
      {
        v12 = *(void **)(LocalCommand + 96);
        *(_BYTE *)(LocalCommand + 11) = 0;
        memset(v12, 0, 0x10A0uLL);
        *(_QWORD *)(*(_QWORD *)(LocalCommand + 96) + 4232LL) = 0LL;
        v13 = *(_QWORD *)(LocalCommand + 96);
        *(_QWORD *)(LocalCommand + 64) = v13;
        *(_DWORD *)LocalCommand = 1;
        *(_BYTE *)(v13 + 4253) |= 1u;
        *(_BYTE *)(*(_QWORD *)(LocalCommand + 96) + 4253LL) &= ~2u;
        *(_WORD *)(*(_QWORD *)(LocalCommand + 96) + 4244LL) = 0;
        *(_BYTE *)(v7 + 4140) = *(_DWORD *)(a1 + 3984);
        *(_QWORD *)(v7 + 4224) = NVMeReConfigAsyncEventCompletion;
        *(_BYTE *)(v7 + 4096) = 9;
        *(_BYTE *)(v7 + 4136) = 11;
        return ProcessCommand(a1, LocalCommand + 8);
      }
      else
      {
        return NVMeIssueAsyncEventCommand(a1, LocalCommand);
      }
    }
  }
  else
  {
    *(_BYTE *)(result + 4253) |= 8u;
  }
  return result;
}
