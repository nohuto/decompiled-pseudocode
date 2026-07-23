/*
 * XREFs of FsRtlNotifyFullChangeDirectory @ 0x14088D7D0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlNotifyFilterChangeDirectory @ 0x1405F02F0 (FsRtlNotifyFilterChangeDirectory.c)
 */

void __stdcall FsRtlNotifyFullChangeDirectory(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PVOID FsContext,
        PSTRING FullDirectoryName,
        BOOLEAN WatchTree,
        BOOLEAN IgnoreBuffer,
        ULONG CompletionFilter,
        PIRP NotifyIrp,
        PCHECK_FOR_TRAVERSE_ACCESS TraverseCallback,
        PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  FsRtlNotifyFilterChangeDirectory(
    NotifySync,
    NotifyList,
    FsContext,
    FullDirectoryName,
    WatchTree,
    IgnoreBuffer,
    CompletionFilter,
    NotifyIrp,
    TraverseCallback,
    SubjectContext,
    0LL);
}
