/*
 * XREFs of ?ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0144A38
 * Callers:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C0144420 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDisplayConfigWireFormatToPathModalityForPath(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2)
{
  __int64 v2; // r8
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v10; // edi
  __int64 v11; // rdx
  int v12; // r10d
  int v13; // r9d
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // eax

  v2 = 8LL;
  if ( (*(_BYTE *)a1 & 8) != 0 )
  {
    v5 = *((_DWORD *)a1 + 45);
    switch ( v5 )
    {
      case 6:
        v10 = 0x4000000;
        v11 = 256LL;
        v12 = 0x100000;
        v13 = 0x4000;
        v2 = 4LL;
        break;
      case 8:
        v10 = 0x8000000;
        v11 = 512LL;
        v12 = 0x200000;
        v13 = 0x8000;
        break;
      case 10:
        v10 = 0x10000000;
        v11 = 1024LL;
        v12 = 0x400000;
        v13 = 0x10000;
        v2 = 16LL;
        break;
      case 12:
        v10 = 0x20000000;
        v11 = 2048LL;
        v12 = 0x800000;
        v13 = 0x20000;
        v2 = 32LL;
        break;
      case 14:
        v10 = 0x40000000;
        v11 = 4096LL;
        v12 = 0x1000000;
        v13 = 0x40000;
        v2 = 64LL;
        break;
      case 16:
        v10 = 0x80000000;
        v11 = 0x2000LL;
        v12 = 0x2000000;
        v13 = 0x80000;
        v2 = 128LL;
        break;
      default:
        v6 = WdLogNewEntry5_WdError(a1, a2, 16LL);
        v8 = *((unsigned int *)a1 + 45);
LABEL_9:
        *(_QWORD *)(v6 + 24) = v8;
        WdLogEvent5_WdError(v6, v7);
        return 3221225485LL;
    }
    v14 = *((unsigned int *)a1 + 44);
    if ( (_DWORD)v14 )
    {
      v14 = (unsigned int)(v14 - 1);
      if ( (_DWORD)v14 )
      {
        v14 = (unsigned int)(v14 - 1);
        if ( (_DWORD)v14 )
        {
          v14 = (unsigned int)(v14 - 1);
          if ( (_DWORD)v14 )
          {
            if ( (_DWORD)v14 != 1 )
            {
              v6 = WdLogNewEntry5_WdError(v14, v11, v2);
              v8 = *((int *)a1 + 44);
              goto LABEL_9;
            }
            v15 = v10 | *((_DWORD *)a2 + 51) & 0x3FFFFFF;
          }
          else
          {
            v15 = v12 | *((_DWORD *)a2 + 51) & 0xFC0FFFFF;
          }
        }
        else
        {
          v15 = v13 | *((_DWORD *)a2 + 51) & 0xFFF03FFF;
        }
      }
      else
      {
        v15 = v11 | *((_DWORD *)a2 + 51) & 0xFFFFC0FF;
      }
    }
    else
    {
      v15 = v2 | *((_DWORD *)a2 + 51) & 0xFFFFFF03;
    }
    *((_DWORD *)a2 + 51) = v15;
    v16 = *((_DWORD *)a1 + 46);
    if ( v16 && v16 != 12 && (v16 <= 29 || v16 > 33) )
    {
      v6 = WdLogNewEntry5_WdError(v14, v11, v2);
      v8 = *((unsigned int *)a1 + 46);
      goto LABEL_9;
    }
    *((_DWORD *)a2 + 52) = v16;
  }
  return 0LL;
}
