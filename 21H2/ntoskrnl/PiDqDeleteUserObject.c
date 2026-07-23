/*
 * XREFs of PiDqDeleteUserObject @ 0x14072DBF8
 * Callers:
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x14072DAB4 (PiDqDeleteUserObjectFromLoadedHives.c)
 * Callees:
 *     wcsrchr @ 0x1403D4270 (wcsrchr.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140607AEC (PiDqGetRelativeObjectRegPath.c)
 *     _RegRtlDeleteTreeInternal @ 0x140766B34 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140766F18 (_RegRtlDeleteKeyTransacted.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqDeleteUserObject(__int64 a1, int a2, int a3)
{
  int RelativeObjectRegPath; // ebp
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  int v9; // edi
  unsigned int i; // edi
  wchar_t *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  wchar_t *Str; // [rsp+58h] [rbp+20h] BYREF

  Str = 0LL;
  RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(a2, a3, (PVOID *)&Str);
  if ( RelativeObjectRegPath < 0 )
    goto LABEL_17;
  if ( *(_QWORD *)&PiPnpRtlCtx && (v6 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
    v7 = *(_QWORD *)(v6 + 8);
  else
    v7 = 0LL;
  RelativeObjectRegPath = RegRtlDeleteTreeInternal(a1, Str, v7, 0LL);
  v8 = 2;
  v9 = a3 - 1;
  if ( !v9 )
    goto LABEL_8;
  if ( v9 != 2 )
  {
    v8 = 0;
LABEL_8:
    if ( !v8 )
      goto LABEL_17;
    goto LABEL_11;
  }
  v8 = 1;
LABEL_11:
  for ( i = 0; i < v8; ++i )
  {
    v11 = wcsrchr(Str, 0x5Cu);
    if ( v11 )
    {
      *v11 = 0;
      if ( *(_QWORD *)&PiPnpRtlCtx && (v12 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v13 = *(_QWORD *)(v12 + 8);
      else
        v13 = 0LL;
      if ( (int)RegRtlDeleteKeyTransacted(a1, Str, v13) < 0 )
        break;
    }
  }
LABEL_17:
  if ( Str )
    ExFreePoolWithTag(Str, 0x58706E50u);
  return (unsigned int)RelativeObjectRegPath;
}
