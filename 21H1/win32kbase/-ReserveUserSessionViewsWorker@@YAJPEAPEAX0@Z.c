/*
 * XREFs of ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C01424A0
 * Callers:
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1C0142444 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 * Callees:
 *     Win32CreateSection @ 0x1C0021038 (Win32CreateSection.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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

  if ( qword_1C0258750 )
    v4 = qword_1C0258750(1LL);
  else
    v4 = 0;
  if ( qword_1C0258750 )
    v5 = qword_1C0258750(2LL);
  else
    v5 = 0;
  if ( qword_1C0258750 )
    v6 = qword_1C0258750(0LL);
  else
    v6 = 0;
  v7 = (int)qword_1C0258750;
  if ( qword_1C0258750 )
    v7 = qword_1C0258750(3LL);
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
