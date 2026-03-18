/*
 * XREFs of ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C0139E04
 * Callers:
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1C0139DA8 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     Win32CreateSection @ 0x1C0071C38 (Win32CreateSection.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReserveUserSessionViewsWorker(void **a1, void **a2)
{
  int v4; // r14d
  int v5; // ebp
  int v6; // ebx
  int v7; // eax
  ULONG_PTR v8; // rbp
  NTSTATUS Section; // eax
  unsigned int v10; // ebx
  ULONG v11; // eax
  __int64 v12; // rdx
  PVOID v13; // rcx
  int v14; // eax
  ULONG v15; // eax
  __int64 v16; // rdx
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+20h] BYREF

  if ( qword_1C0250790 )
    v4 = qword_1C0250790(1LL);
  else
    v4 = 0;
  if ( qword_1C0250790 )
    v5 = qword_1C0250790(2LL);
  else
    v5 = 0;
  if ( qword_1C0250790 )
    v6 = qword_1C0250790(0LL);
  else
    v6 = 0;
  v7 = (int)qword_1C0250790;
  if ( qword_1C0250790 )
    v7 = qword_1C0250790(3LL);
  v8 = (unsigned int)(v4 + v6 + 10 * v7 + v5);
  Section = Win32CreateSection(a1, 983071LL);
  v10 = Section;
  if ( Section >= 0 )
  {
    *a2 = 0LL;
    v13 = *a1;
    ViewSize = v8;
    v14 = MmMapViewInSessionSpace(v13, a2, &ViewSize);
    v10 = v14;
    if ( v14 < 0 )
    {
      v15 = RtlNtStatusToDosError(v14);
      UserSetLastError(v15, v16);
      ObfDereferenceObject(*a1);
    }
  }
  else
  {
    v11 = RtlNtStatusToDosError(Section);
    UserSetLastError(v11, v12);
  }
  return v10;
}
