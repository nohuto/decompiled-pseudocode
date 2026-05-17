/*
 * XREFs of _PsspCaptureIptTrace@8 @ 0x4B38717C
 * Callers:
 *     _PssNtCaptureSnapshot@16 @ 0x4B386310 (_PssNtCaptureSnapshot@16.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _GetProcessIptTrace@12 @ 0x4B3898E3 (_GetProcessIptTrace@12.c)
 *     _GetProcessIptTraceSize@8 @ 0x4B3899B0 (_GetProcessIptTraceSize@8.c)
 */

int __fastcall PsspCaptureIptTrace(_DWORD *a1, int a2)
{
  int result; // eax
  size_t v4; // esi
  int v5; // ebx
  int ProcessIptTrace; // esi
  _DWORD *v7; // ecx
  int v8; // eax
  _DWORD v9[3]; // [esp+10h] [ebp-20h] BYREF
  int v10; // [esp+1Ch] [ebp-14h]
  int v11; // [esp+20h] [ebp-10h] BYREF
  size_t Size; // [esp+24h] [ebp-Ch] BYREF
  void *v13; // [esp+28h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+2Ch] [ebp-4h] BYREF

  v10 = a2;
  v13 = 0;
  Size = 0;
  Handle = 0;
  v9[0] = 0;
  v9[1] = 0;
  v11 = 0;
  result = GetProcessIptTraceSize(a2, &Size);
  if ( result >= 0 )
  {
    v4 = Size;
    if ( Size )
    {
      v9[0] = Size;
      result = NtCreateSection((int)&Handle, 983047, (int)dword_4B2A58A0, (int)v9, 4, 0x8000000, 0);
      if ( result >= 0 )
      {
        v5 = ZwMapViewOfSection((int)Handle, -1, (int)&v13, 0, 0, 0, (int)&v11, 1, 0, 4);
        if ( v5 >= 0 )
        {
          memset(v13, 0, v4);
          ProcessIptTrace = GetProcessIptTrace(v10, v13, v4);
          if ( ProcessIptTrace >= 0 )
          {
            v7 = v13;
            a1[242] = Handle;
            v8 = v7[1];
            a1[1] |= 0x10u;
            a1[243] = v8 + 8;
            NtUnmapViewOfSection(-1, (int)v7);
            return 0;
          }
          else
          {
            NtUnmapViewOfSection(-1, (int)v13);
            NtClose(Handle);
            return ProcessIptTrace;
          }
        }
        else
        {
          NtClose(Handle);
          return v5;
        }
      }
    }
    else
    {
      return -1073741275;
    }
  }
  return result;
}
