/*
 * XREFs of _RXactpCommit@4 @ 0x4B34539B
 * Callers:
 *     _RtlApplyRXact@4 @ 0x4B345770 (_RtlApplyRXact@4.c)
 *     _RtlApplyRXactNoFlush@4 @ 0x4B345800 (_RtlApplyRXactNoFlush@4.c)
 *     _RtlInitializeRXact@12 @ 0x4B345820 (_RtlInitializeRXact@12.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwSetValueKey@24 @ 0x4B2F2F80 (_ZwSetValueKey@24.c)
 *     _ZwDeleteKey@4 @ 0x4B2F36B0 (_ZwDeleteKey@4.c)
 *     _RXactpOpenTargetKey@16 @ 0x4B3454BA (_RXactpOpenTargetKey@16.c)
 */

int __thiscall RXactpCommit(_DWORD *this)
{
  _DWORD *v1; // eax
  char v2; // bh
  unsigned int v3; // edx
  HANDLE *v4; // esi
  HANDLE v5; // ecx
  char v6; // bl
  int result; // eax
  int v8; // eax
  HANDLE v9; // eax
  int v10; // edi
  HANDLE Handle[2]; // [esp+Ch] [ebp-14h] BYREF
  int v12; // [esp+14h] [ebp-Ch]
  unsigned int v13; // [esp+18h] [ebp-8h]
  _DWORD *v14; // [esp+1Ch] [ebp-4h]

  v1 = (_DWORD *)this[3];
  v12 = 0;
  v2 = *((_BYTE *)this + 8);
  v3 = *v1;
  v14 = v1;
  v13 = v3;
  v4 = (HANDLE *)(v1 + 3);
  Handle[1] = *(HANDLE *)this;
  if ( v3 )
  {
    while ( 1 )
    {
      v4[3] = (char *)v4[3] + (_DWORD)v1;
      v4[5] = (char *)v4[5] + (_DWORD)v1;
      v4[9] = (char *)v4[9] + (_DWORD)v1;
      if ( v4[1] == HANDLE_FLAG_INHERIT )
      {
        v9 = v4[6];
        if ( v9 == (HANDLE)-1 || !v2 )
        {
          result = RXactpOpenTargetKey(v4 + 2, Handle);
          if ( result < 0 )
          {
            if ( result != -1073741772 )
              return result;
            goto LABEL_21;
          }
          v9 = Handle[0];
          v6 = 1;
        }
        else
        {
          Handle[0] = v4[6];
          v6 = 0;
        }
        v8 = ZwDeleteKey((int)v9);
      }
      else
      {
        if ( v4[1] != HANDLE_FLAG_PROTECT_FROM_CLOSE )
          return -1073741811;
        v5 = v4[6];
        if ( v5 == (HANDLE)-1 || !v2 )
        {
          result = RXactpOpenTargetKey(v4 + 2, Handle);
          if ( result < 0 )
            return result;
          v5 = Handle[0];
          v6 = 1;
        }
        else
        {
          Handle[0] = v4[6];
          v6 = 0;
        }
        v8 = ZwSetValueKey((int)v5, (int)(v4 + 4), 0, (int)v4[7], (int)v4[9], (int)v4[8]);
      }
      v10 = v8;
      if ( v6 )
        NtClose(Handle[0]);
      if ( v10 < 0 )
        return v10;
LABEL_21:
      v4 = (HANDLE *)((char *)v4 + (_DWORD)*v4);
      if ( ++v12 >= v13 )
        return 0;
      v1 = v14;
    }
  }
  return 0;
}
