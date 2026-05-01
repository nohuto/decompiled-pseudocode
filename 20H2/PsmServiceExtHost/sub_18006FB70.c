/*
 * XREFs of sub_18006FB70 @ 0x18006FB70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18006D92C @ 0x18006D92C (sub_18006D92C.c)
 */

__int64 __fastcall sub_18006FB70(__int64 a1, __int64 a2)
{
  char v2; // si
  NTSTATUS v4; // ebx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+40h] [rbp-10h] BYREF
  NTSTATUS v11[3]; // [rsp+44h] [rbp-Ch] BYREF
  char v12; // [rsp+78h] [rbp+28h] BYREF
  char v13; // [rsp+80h] [rbp+30h] BYREF
  __int16 ProcessInformation; // [rsp+88h] [rbp+38h] BYREF

  v2 = *(_BYTE *)(a2 + 148);
  if ( v2 )
  {
    v4 = NtQueryInformationProcess(*(HANDLE *)(a2 + 40), ProcessPriorityClass, &ProcessInformation, 2u, 0LL);
    if ( v4 >= 0 )
    {
      v5 = *(void **)(a2 + 40);
      *(_WORD *)(a2 + 168) = ProcessInformation;
      HIBYTE(ProcessInformation) = v2;
      v4 = NtSetInformationProcess(v5, ProcessPriorityClass, &ProcessInformation, 2u);
    }
  }
  else
  {
    v4 = 255;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v12 = HIBYTE(ProcessInformation);
    v13 = ProcessInformation;
    v10 = *(_DWORD *)(a2 + 108);
    v11[0] = v4;
    sub_18006D92C(v6, byte_18009C79B, v7, v8, (__int64)v11, (__int64)&v10, (__int64)&v13, (__int64)&v12);
  }
  return (unsigned int)v4;
}
