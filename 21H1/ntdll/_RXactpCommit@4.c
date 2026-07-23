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
  _UNICODE_STRING *v4; // esi
  HANDLE v5; // ecx
  char v6; // bl
  int result; // eax
  NTSTATUS v8; // eax
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
  v4 = (_UNICODE_STRING *)(v1 + 3);
  Handle[1] = *(HANDLE *)this;
  if ( v3 )
  {
    while ( 1 )
    {
      v4[1].Buffer = (wchar_t *)((char *)v4[1].Buffer + (unsigned int)v1);
      v4[2].Buffer = (wchar_t *)((char *)v4[2].Buffer + (unsigned int)v1);
      v4[4].Buffer = (wchar_t *)((char *)v4[4].Buffer + (unsigned int)v1);
      if ( v4->Buffer == (wchar_t *)1 )
      {
        v9 = *(HANDLE *)&v4[3].Length;
        if ( v9 == (HANDLE)-1 || !v2 )
        {
          result = RXactpOpenTargetKey((int)&v4[1], Handle);
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
          Handle[0] = *(HANDLE *)&v4[3].Length;
          v6 = 0;
        }
        v8 = ZwDeleteKey(v9);
      }
      else
      {
        if ( v4->Buffer != (wchar_t *)2 )
          return -1073741811;
        v5 = *(HANDLE *)&v4[3].Length;
        if ( v5 == (HANDLE)-1 || !v2 )
        {
          result = RXactpOpenTargetKey((int)&v4[1], Handle);
          if ( result < 0 )
            return result;
          v5 = Handle[0];
          v6 = 1;
        }
        else
        {
          Handle[0] = *(HANDLE *)&v4[3].Length;
          v6 = 0;
        }
        v8 = ZwSetValueKey(v5, v4 + 2, 0, (ULONG)v4[3].Buffer, v4[4].Buffer, *(_DWORD *)&v4[4].Length);
      }
      v10 = v8;
      if ( v6 )
        NtClose(Handle[0]);
      if ( v10 < 0 )
        return v10;
LABEL_21:
      v4 = (_UNICODE_STRING *)((char *)v4 + *(_DWORD *)&v4->Length);
      if ( ++v12 >= v13 )
        return 0;
      v1 = v14;
    }
  }
  return 0;
}
